#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

    void algorithm1();
    double abrir();

    int bandera = 0;

private slots:
    void on_boton1_pressed();

    void on_boton1_released();

    void on_boton1_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
