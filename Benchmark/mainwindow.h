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
    void algorithm2();
    double abrir();
    double cargarImagen();

    int bandera = 0;
    int bandera2 =0;

private slots:
    void on_boton1_pressed();

    void on_boton1_released();

    void on_boton1_clicked();

    void on_boton1_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
