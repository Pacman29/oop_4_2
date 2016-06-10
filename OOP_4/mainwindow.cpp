#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    controller c;
    c.add_button();
    c.add_button();
    c.add_button();

    c.get_in_button(2)->slot_Pressed();
    c.get_in_button(1)->slot_Pressed();
}

MainWindow::~MainWindow()
{
    delete ui;
}
