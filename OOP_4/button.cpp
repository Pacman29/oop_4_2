#include "button.h"
void button::slot_Pressed()
{
    if(this->state == RELEASED)
    {
        qDebug()<<"button pressed";
        this->state = PRESSED;
        emit this->signal_Pressed(this->_floor_number);
    }
}

void button::slot_Released()
{
    if(this->state == PRESSED)
    {
        qDebug()<<"button released";
        this->state = RELEASED;
        emit this->signal_Released(this->_floor_number);
    }
}
