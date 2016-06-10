#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
#include "door.h"
#include "elevator.h"
#include "button.h"
using namespace std;
class controller : public QObject
{
    Q_OBJECT
private:
    enum{
        LIFT_MOVE,
        LIFT_DONT_MOVE,
    } state;
    size_t _floor_count;
    door* _door;
    elevator* _elevator;
    vector<button*> _buttons;
    vector<bool> _call_array;
public:
    controller();
    bool add_button();
    size_t get_floor_count();
    const button* get_button(size_t floor);
signals:

public slots:
};

#endif // CONTROLLER_H
