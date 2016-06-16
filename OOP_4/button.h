#ifndef BUTTON_H
#define BUTTON_H
#include <QDebug>
#include <QObject>
enum button_state{
    PRESSED,
    RELEASED
};

class button : public QObject
{
    Q_OBJECT
private:
    button_state state;
    size_t _floor_number;
public:
    button(size_t floor_number);
    ~button(){}
signals:
    void signal_Pressed(size_t);
    void signal_Released();
    void signal_Released_out();
public slots:
    void slot_Pressed();
    void slot_Released();
};

#endif // BUTTON_H
