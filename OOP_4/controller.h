#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
#include <QSet>
#include "door.h"
#include "elevator.h"
#include "button.h"
using namespace std;
class controller : public QObject
{
    Q_OBJECT
private:
    enum{
        LIFT_CAN_MOVE,
        LIFT_CANT_MOVE,
    } state;

    size_t _floor_destination;
    size_t _floor_current;
    size_t _floor_count;

    door _door;
    elevator _elevator;
    vector<button*> _buttons_in;
    QSet<size_t> _call_array;
    QTimer open_door;
public:
    controller();
    bool add_button();
    size_t get_floor_count();
    button* get_in_button(size_t floor);
private:
    size_t max_call();
    void call_processing();
signals:
    void lift_up();
    void lift_down();
    void lift_stop();
    void lift_open_door();
private slots:
    void call_in(size_t floor);
    void lift_wait();
    void lift_move(ssize_t koef);
    void slot_open_door();
    void slot_close_door();
};

#endif // CONTROLLER_H
