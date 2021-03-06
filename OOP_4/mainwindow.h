#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "controller.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_pushButton_clicked();
    void on_pushButton_released();

    void on_pushButton_2_clicked();
    void on_pushButton_2_released();

    void on_pushButton_3_clicked();
    void on_pushButton_3_released();

    void on_pushButton_4_clicked();
    void on_pushButton_4_released();

    void on_pushButton_5_clicked();
    void on_pushButton_5_released();

private:
    Ui::MainWindow *ui;
    controller c;
};

#endif // MAINWINDOW_H
