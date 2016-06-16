#include "call_handler.h"
call_handler::call_handler() : state(NO_CALL),_floor_count(0),_floor_destination(0)
{

}

bool call_handler::add_button()
{
    button* btn_in = new button(this->_floor_count+1);
    if(!btn_in)
        return false;

    this->_buttons_in.push_back(btn_in);
    connect(btn_in,SIGNAL(signal_Pressed(size_t)),this,SLOT(get_call(size_t)));
    this->_floor_count++;
    return true;
}

button* call_handler::get_in_button(size_t floor)
{
    if(floor == 0 || floor > this->_floor_count)
        return NULL;
    return this->_buttons_in[floor-1];
}

size_t call_handler::get_destination()
{
    return this->_floor_destination;
}

size_t call_handler::get_floor_count()
{
    return this->_floor_count;
}

void call_handler::get_call(size_t floor)
{
    if(this->state == NO_CALL)
        this->state = CALL;

    this->_call_array.insert(floor);

    for(QSet<size_t>::iterator it = this->_call_array.begin();
            it != this->_call_array.end(); it++)
        floor = (*it > floor) ? (*it) : (floor);

    this->_floor_destination = floor;
    emit this->have_call();
}

void call_handler::del_call(size_t floor)
{
    if(this->_call_array.remove(floor))
        emit _buttons_in[floor-1]->signal_Released();

    if(this->_call_array.isEmpty() && this->state == CALL)
    {
        this->state = NO_CALL;
        this->_floor_destination = 0;
    }
    else
    {
        floor = 0;
        this->state = CALL;
        for(QSet<size_t>::iterator it = this->_call_array.begin();
                it != this->_call_array.end(); it++)
            floor = (*it > floor) ? (*it) : (floor);
        this->_floor_destination = floor;
        emit this->have_call();
    }
}

