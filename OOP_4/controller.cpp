#include "controller.h"

controller::controller() : _floor_count(0)
{

}

bool controller::add_button()
{
    this->_buttons[this->_floor_count] = new button(this->_floor_count);
    if(!this->_buttons[this->_floor_count])
        return false;
    this->_floor_count++;
    return true;
}

size_t controller::get_floor_count()
{
    return this->_floor_count;
}

const button *controller::get_button(size_t floor)
{
    if(floor == 0 || floor > this->_floor_count)
        return NULL;
    return this->_buttons[floor-1];
}

