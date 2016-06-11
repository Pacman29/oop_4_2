#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(size_t i = 0; i!=5; ++i)
        c.add_button();

    connect(c.get_in_button(1),SIGNAL(signal_Released()),this,SLOT(on_pushButton_released()));
    connect(c.get_in_button(2),SIGNAL(signal_Released()),this,SLOT(on_pushButton_2_released()));
    connect(c.get_in_button(3),SIGNAL(signal_Released()),this,SLOT(on_pushButton_3_released()));
    connect(c.get_in_button(4),SIGNAL(signal_Released()),this,SLOT(on_pushButton_4_released()));
    connect(c.get_in_button(5),SIGNAL(signal_Released()),this,SLOT(on_pushButton_5_released()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    c.get_in_button(1)->slot_Pressed();
    ui->pushButton->setEnabled(false);
}

void MainWindow::on_pushButton_released()
{
        ui->pushButton->setEnabled(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    c.get_in_button(2)->slot_Pressed();
    ui->pushButton_2->setEnabled(false);
}

void MainWindow::on_pushButton_2_released()
{
        ui->pushButton_2->setEnabled(true);
}

void MainWindow::on_pushButton_3_clicked()
{
    c.get_in_button(3)->slot_Pressed();
    ui->pushButton_3->setEnabled(false);
}

void MainWindow::on_pushButton_3_released()
{

        ui->pushButton_3->setEnabled(true);
}

void MainWindow::on_pushButton_4_clicked()
{
    c.get_in_button(4)->slot_Pressed();
    ui->pushButton_4->setEnabled(false);
}

void MainWindow::on_pushButton_4_released()
{
        ui->pushButton_4->setEnabled(true);
}

void MainWindow::on_pushButton_5_clicked()
{
    c.get_in_button(5)->slot_Pressed();
    ui->pushButton_5->setEnabled(false);
}

void MainWindow::on_pushButton_5_released()
{
        ui->pushButton_5->setEnabled(true);
}
