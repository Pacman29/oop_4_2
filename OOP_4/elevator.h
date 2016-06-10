#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <QObject>
#include <QTimer>
enum elevator_state{
    MOVE_UP,
    MOVE_DOWN,
    STOP
};
class elevator : public QObject
{
    Q_OBJECT
private:
    elevator_state state;
    QTimer timer;
public:
    elevator();
    
signals:
    void signals_stop();
    void signals_move(ssize_t koef);
private slots:
    void slots_move();
public slots:
    void slots_up();
    void slots_down();
    void slots_stop();
};

#endif // ELEVATOR_H
