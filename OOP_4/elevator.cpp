#include "elevator.h"
#include <QDebug>
elevator::elevator() : state(MOVE_UP)
{
    this->timer.setInterval(3000);
    this->timer.setSingleShot(true);
    connect(&this->timer,SIGNAL(timeout()),this,SLOT(slots_move()));
}

void elevator::slots_stop()
{
    if(this->state == MOVE_DOWN || this->state == MOVE_UP)
    {
        qDebug()<<"lift_stop";
        this->state = STOP;
        emit this->signals_stop();
    }
}

void elevator::slots_up()
{
    if(this->state == STOP)
    {
        qDebug()<<"lift_move_up";
        this->state = MOVE_UP;
        this->timer.start();
    }
}

void elevator::slots_down()
{
    if(this->state == STOP)
    {
        qDebug()<<"lift_move_down";
        this->state = MOVE_DOWN;
        this->timer.start();
    }
}

void elevator::slots_move()
{
    if(this->state == MOVE_UP)
        emit this->signals_move(1);
    if(this->state == MOVE_DOWN)
        emit this->signals_move(-1);
}
