#ifndef DOOR_H
#define DOOR_H

#include <QObject>
#include <QTimer>

class door : public QObject
{
    Q_OBJECT
private:
    enum {
        OPEN,
        CLOSE,
        OPENING,
        CLOSING
    } state;
    QTimer open_t;
    QTimer close_t;
    QTimer delay_t;
public:
    door();

signals:
    void signal_door_is_close();
    void signal_open_door();
    void the_door_opened();
public slots:
    void slot_open();
    void slot_close();
private slots:
    void slot_opening();
    void slot_closeing();
};

#endif // DOOR_H
