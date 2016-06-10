#ifndef BUTTON_H
#define BUTTON_H

#include <QObject>

class button : public QObject
{
    Q_OBJECT
private:
    enum{
        PRESSED,
        RELEASED
    } state;
    size_t _floor_number;
public:
    button(size_t floor_number) :
        _floor_number(floor_number),
        state(RELEASED){}
    ~button(){}
signals:
    void signal_Pressed(size_t);
    void signal_Released(size_t);
public slots:
    void slot_Pressed();
    void slot_Released();
};

#endif // BUTTON_H
