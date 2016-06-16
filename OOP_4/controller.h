#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
#include "door.h"
#include "elevator.h"
#include "call_handler.h"

class controller : public QObject
{
    Q_OBJECT
private:
    enum{
        LIFT_CAN_MOVE,
        LIFT_CANT_MOVE,
        LIFT_OPEN_DOOR,
        LIFT_CLOSE_DOOR
    } state;

    size_t _floor_current;

    door _door;
    elevator _elevator;
    call_handler _call_hendler;

    QTimer open_door;
public:
    controller();
    bool add_button();
    size_t get_floor_count();
    button* get_in_button(size_t floor);
private:

signals:
    void lift_up();
    void lift_down();
    void lift_stop();
    void lift_open_door();
    void lift_on_floor(size_t);
private slots:
    void lift_wait();
    void lift_wait_open_door();
    void lift_stay_with_open_door();
    void lift_stay_with_close_door();
};

#endif // CONTROLLER_H
