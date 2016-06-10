#include "button.h"
void button::slot_Pressed()
{
    if(this->state == RELEASED)
    {
        this->state = PRESSED;
        emit this->signal_Pressed(this->_floor_number);
    }
}

void button::slot_Released()
{
    if(this->state == PRESSED)
    {
        this->state = RELEASED;
        emit this->signal_Released(this->_floor_number);
    }
}
