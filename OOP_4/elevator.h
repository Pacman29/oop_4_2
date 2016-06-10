#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <QObject>

class elevator : public QObject
{
    Q_OBJECT
private:
    enum{
        MOVE_UP,
        MOVE_DOWN,
        STOP
    } state;
public:
    elevator();

signals:

public slots:
};

#endif // ELEVATOR_H
