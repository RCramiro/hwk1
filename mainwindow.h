/**
* @file
* @author Ramiro Chaidez
* @version 1.0
* @section DESCRIPTION
*  This file declares the MainWindow class, which takes on the UI defined in ui, and
*  is set to perform certain functions (on_pushButton_clicked(), on_checkBox_toggled(),
*  or on_commandLinkButton_clicked()) whenever specific UI elements are clicked or
*  toggled.
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class of the application. Is responsible for defining each UI
 *         element's actions.
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
         /**
          * Constructor for MainWindow
          *
          * @param parent The window's parent widget. This can be null if there is no parent
          */
        MainWindow(QWidget *parent = 0);
        ~MainWindow();

    private slots:
        void on_pushButton_clicked();
        void on_checkBox_toggled(bool checked);
        void on_commandLinkButton_clicked();

    private:
        /**
         * The user interface used by MainWindow.
         */
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
