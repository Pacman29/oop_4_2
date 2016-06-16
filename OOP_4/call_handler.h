#ifndef CALL_HANDLER_H
#define CALL_HANDLER_H
#include <QObject>
#include <QSet>
#include "button.h"

using namespace std;

class call_handler : public QObject
{
    Q_OBJECT
private:
    enum{
        CALL,
        NO_CALL
    }state;

    vector<button*> _buttons_in;
    QSet<size_t> _call_array;
    size_t _floor_count;
    size_t _floor_destination;
public:
    call_handler();
    bool add_button();
    button* get_in_button(size_t floor);
    size_t get_destination();
    size_t get_floor_count();

signals:
    void have_call();
public slots:
    void get_call(size_t floor);
    void del_call(size_t floor);
};

#endif // CALL_HANDLER_H
