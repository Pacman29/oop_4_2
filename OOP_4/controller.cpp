#include "controller.h"

controller::controller() : state(LIFT_CAN_MOVE), _floor_current(0)
{
    connect(&this->_call_hendler,SIGNAL(have_call()),this,SLOT(lift_wait()));
    connect(this,SIGNAL(lift_stop()),&this->_elevator,SLOT(slots_stop()));
    connect(&this->_elevator,SIGNAL(signals_stop()),this,SLOT(lift_wait_open_door()));
    connect(&this->_door,SIGNAL(signal_door_is_close()),this,SLOT(lift_stay_with_close_door()));
    connect(this,SIGNAL(lift_up()),&this->_elevator,SLOT(slots_up()));
    connect(this,SIGNAL(lift_down()),&this->_elevator,SLOT(slots_down()));
    connect(&this->_elevator,SIGNAL(signals_move()),this,SLOT(lift_wait()));
    connect(this,SIGNAL(lift_on_floor(size_t)),&this->_call_hendler,SLOT(del_call(size_t)));
    connect(&this->_door,SIGNAL(the_door_opened()),this,SLOT(lift_stay_with_open_door()));
}


bool controller::add_button()
{
    return this->_call_hendler.add_button();
}

size_t controller::get_floor_count()
{
    return this->_call_hendler.get_floor_count();
}

button *controller::get_in_button(size_t floor)
{
    return this->_call_hendler.get_in_button(floor);
}


void controller::lift_wait()
{
        size_t dest  = this->_call_hendler.get_destination();
        if(dest)
        {
            if(this->_floor_current == dest)
            {
                this->state = LIFT_CANT_MOVE;
                emit this->lift_stop();
                return;
            }
            if(this->state == LIFT_CLOSE_DOOR || this->state == LIFT_CAN_MOVE)
            {
                this->state = LIFT_CAN_MOVE;

                if(this->_floor_current > dest)
                {
                    this->_floor_current--;
                    emit this->lift_down();
                }
                else if(this->_floor_current < dest)
                {
                    this->_floor_current++;
                    emit this->lift_up();
                }
            }
        }
}


void controller::lift_wait_open_door()
{
    if(this->state == LIFT_CANT_MOVE)
    {
        this->state = LIFT_OPEN_DOOR;
        emit this->_door.signal_open_door();
    }
}

void controller::lift_stay_with_open_door()
{
    if(this->state == LIFT_OPEN_DOOR)
    {
        this->state = LIFT_CANT_MOVE;
        emit this->lift_on_floor(this->_floor_current);
    }
}

void controller::lift_stay_with_close_door()
{
    if(this->state == LIFT_CANT_MOVE || this->state == LIFT_OPEN_DOOR)
    {
        this->state = LIFT_CLOSE_DOOR;
        emit this->_call_hendler.have_call();
    }
}


