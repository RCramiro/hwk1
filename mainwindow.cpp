/**
* @file
* @author Ramiro Chaidez
* @version 1.0
* @section DESCRIPTION
*  This file defines the MainWindow class. See MainWindow
*  for more information.
*/

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

/**
 * Slot for pushButton::clicked() signals
 *
 * Prints a message to let user know that pushButton was clicked
 */
void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton was clicked" << std::endl;
}

/**
 * Slot for checkBox::toggled(bool) signals
 * @param checked Indicates whether the checkBox was toggled to 'true' or 'false'
 *
 * Prints a message to let the user know that checkBox was toggled
 */
void MainWindow::on_checkBox_toggled(bool checked)
{
    std::cout << "checkBox was toggled to " << (checked ? "true" : "false") << std::endl;
}

/**
 * Slot for commandLinkButton::clicked() signals
 *
 * Prints a message to let the user know that commandLinkButton was clicked
 */
void MainWindow::on_commandLinkButton_clicked()
{
    std::cout << "commandLinkButton was clicked" << std::endl;
}
