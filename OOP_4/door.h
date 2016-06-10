#ifndef DOOR_H
#define DOOR_H

#include <QObject>
#include <QTimer>
enum door_state{
    OPEN,
    CLOSE,
    OPENING,
    CLOSING
};

class door : public QObject
{
    Q_OBJECT
private:
    door_state state;
    QTimer open_t;
    QTimer close_t;
public:
    door();

signals:
    void signal_door_is_open();
    void signal_door_is_close();
public slots:
    void slot_open();
    void slot_close();
private slots:
    void slot_opening();
    void slot_closeing();
};

#endif // DOOR_H
