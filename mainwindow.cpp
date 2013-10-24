#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton was clicked" << std::endl;
}

void MainWindow::on_checkBox_toggled(bool checked)
{
    std::cout << "checkBox was toggled to " << (checked ? "true" : "false") << std::endl;
}

void MainWindow::on_commandLinkButton_clicked()
{
    std::cout << "commandLinkButton was clicked" << std::endl;
}
