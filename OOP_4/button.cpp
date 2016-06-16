#include "button.h"
button::button(size_t floor_number) :
    _floor_number(floor_number),
    state(RELEASED)
{
    connect(this,SIGNAL(signal_Released()),this,SLOT(slot_Released()));
}

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
        emit this->signal_Released_out();
    }
}
