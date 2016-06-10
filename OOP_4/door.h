#ifndef DOOR_H
#define DOOR_H

#include <QObject>

class door : public QObject
{
    Q_OBJECT
private:
    enum{
        OPEN,
        CLOSE,
        OPENING,
        CLOSING
    } state;
public:
    door();

signals:

public slots:
};

#endif // DOOR_H
