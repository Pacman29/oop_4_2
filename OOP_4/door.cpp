#include "door.h"
#include <QDebug>
door::door() : state(CLOSE)
{
    this->open_t.setInterval(3000);
    this->close_t.setInterval(3000);
    this->open_t.setSingleShot(true);
    this->close_t.setSingleShot(true);
    connect(&this->open_t,SIGNAL(timeout()),this,SLOT(slot_opening()));
    connect(&this->close_t,SIGNAL(timeout()),this,SLOT(slot_closeing()));
}

void door::slot_open()
{
    if(this->state == CLOSE)
    {
        qDebug()<<"door_opening";
        this->state = OPENING;
        this->open_t.start();
    }
}

void door::slot_close()
{
    if(this->state == OPEN)
    {
        qDebug()<<"door_closing";
        this->state = CLOSING;
        this->open_t.start();
    }
}

void door::slot_opening()
{
    if(this->state == OPENING)
    {
        qDebug()<<"door_open";
        this->state = OPEN;
        emit this->signal_door_is_open();
    }
}

void door::slot_closeing()
{
    if(this->state == CLOSING)
    {
        qDebug()<<"door_close";
        this->state = CLOSE;
        emit this->signal_door_is_close();
    }
}

