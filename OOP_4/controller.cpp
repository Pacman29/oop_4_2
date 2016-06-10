#include "controller.h"

controller::controller() : _floor_count(0)
{
    this->_door = new door();
    this->_elevator = new elevator();
    this->open_door.setInterval(3000);
   this->open_door.setSingleShot(true);
   connect(&this->open_door,SIGNAL(timeout()),this->_door,SLOT(slot_close()));
   connect(this,SIGNAL(lift_up()),this->_elevator,SLOT(slots_up()));
   connect(this,SIGNAL(lift_down()),this->_elevator,SLOT(slots_down()));
   connect(this,SIGNAL(lift_stop()),this->_elevator,SLOT(slots_stop()));
   connect(this->_elevator,SIGNAL(signals_move(ssize_t)),this,SLOT(lift_move(ssize_t)));
   connect(this->_elevator,SIGNAL(signals_stop()),this,SLOT(lift_wait()));
   connect(this,SIGNAL(lift_open_door()),this->_door,SLOT(slot_open()));
   connect(this->_door,SIGNAL(signal_door_is_open()),this,SLOT(slot_open_door()));
   connect(this->_door,SIGNAL(signal_door_is_close()),this,SLOT(slot_close_door()));
}

bool controller::add_button()
{
    button* btn_in = new button(this->_floor_count);
    if(!btn_in)
        return false;

    this->_buttons_in.push_back(btn_in);
    connect(btn_in,SIGNAL(signal_Pressed(size_t)),this,SLOT(call_in(size_t)));
    connect(this,SIGNAL(signal_release_button(size_t)),btn_in,SLOT(slot_Released()));
    this->_floor_count++;
    return true;
}

size_t controller::get_floor_count()
{
    return this->_floor_count;
}

button *controller::get_in_button(size_t floor)
{
    if(floor == 0 || floor > this->_floor_count)
        return NULL;
    return this->_buttons_in[floor-1];
}

size_t controller::max_call()
{
    size_t floor = 0;
    if(this->_call_array.isEmpty())
        return 0;
    for(QSet<size_t>::iterator it = this->_call_array.begin();
            it != this->_call_array.end(); it++)
        floor = (*it > floor) ? (*it) : (floor);
    return floor;
}


void controller::call_processing()
{
    if(this->_call_array.contains(this->_floor_current))
    {
        this->_call_array.remove(this->_floor_current);
        this->state = LIFT_CANT_MOVE;
        emit lift_stop();
    }
    if(!this->_call_array.isEmpty())
    {
        this->state == LIFT_CAN_MOVE;
        if(this->_floor_current <= max_call())
        {
            emit this->lift_up();
        }
        else
        {
            emit this->lift_down();
        }
    }
}

void controller::call_in(size_t floor)
{
    this->_call_array.insert(floor);
    call_processing();
}

void controller::lift_wait()
{
    if(this->state == LIFT_CANT_MOVE)
    {
        emit this->lift_open_door();
    }
}

void controller::lift_move(ssize_t koef)
{
    this->_floor_current = this->_floor_current + koef;
    call_processing();
}

void controller::slot_open_door()
{
    this->open_door.start();
}

void controller::slot_close_door()
{
    if(this->state == LIFT_CANT_MOVE)
    {
        this->state = LIFT_CAN_MOVE;
        call_processing();
    }
}

