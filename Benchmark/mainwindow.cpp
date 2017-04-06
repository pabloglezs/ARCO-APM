#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLayout>
#include <QSpinBox>
#include <QString>
#include <QTextStream>
#include <QFileDialog>
#include <time.h>
#include <QMessageBox>
#include <QPixmap>
#include <QtCore>

#define N 1000

using namespace std;

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


void MainWindow::on_boton1_pressed()
{
    ui->boton1->setStyleSheet(QString::fromStdString("background-color:rgba(255, 125, 0, 0.5)"));
}

void MainWindow::on_boton1_released()
{
    ui->boton1->setStyleSheet(QString::fromStdString("background-color: rgba(255, 124, 0, 0.3)"));
}

void MainWindow::on_boton1_clicked()
{
    if(bandera == 6){
        bandera = 0;
    }

    algorithm1();
    bandera++;
}

void MainWindow::on_boton1_2_clicked()
{
    if(bandera2 == 6){
        bandera2 = 0;
    }

    algorithm2();
    bandera2++;
}

double MainWindow::abrir(){


      QString nameFile = QFileDialog::getOpenFileName(
               this,
               tr("Open Document"),
               QDir::currentPath(),
               tr("Document files (*.txt);;All files (*.*)") );

       QFile file_in(nameFile);
       QFile file_out("resultado_algoritmo1.txt");

       QTextStream in(&file_in);
       QTextStream out(&file_out);

       if(!file_in.open(QIODevice::ReadOnly)| !file_out.open(QIODevice::WriteOnly)){
           QMessageBox msgBox;
           msgBox.setText("No se ha podido abrir un fichero. Se va a cerrar el programa.");
           msgBox.exec();
           exit(0);
       }

       int a;
       clock_t t=clock();  //start crono

       for (int i = 0; i < N; i++) {
           for (int j = 0; j < N; j++) {
               in >> a;
               out << qSqrt(a)<<" ";
           }
           out << endl;
       }

       t = clock() - t; //fin crono

       file_in.close();
       file_out.close();

       return (double)(t)/CLOCKS_PER_SEC;


}

void MainWindow:: algorithm1(){

    double result = abrir();
    QString resultString = QString:: number(result);
    if(bandera==0){
        ui->exec1_1->clear();
        ui->exec1_1->append(QString::fromStdString("Execution 1: "));
        ui->exec1_1->append(resultString);
    }

    if(bandera==1){
        ui->exec1_2->append(resultString);
    }

    if(bandera==2){
        ui->exec1_3->append(resultString);
    }

    if(bandera==3){
        ui->exec1_4->append(resultString);
    }

    if(bandera==4){
        ui->exec1_5->append(resultString);
    }

    if(bandera==5){
        ui->exec1_6->append(resultString);
    }





}

void MainWindow:: algorithm2(){

    double result = cargarImagen();
    QString resultString = QString:: number(result);
    if(bandera2==0){
        ui->exec2_1->clear();
        ui->exec2_1->append(QString::fromStdString("Execution 1: "));
        ui->exec2_1->append(resultString);
    }

    if(bandera2==1){
        ui->exec2_2->append(resultString);
    }

    if(bandera2==2){
        ui->exec2_3->append(resultString);
    }

    if(bandera2==3){
        ui->exec2_4->append(resultString);
    }

    if(bandera2==4){
        ui->exec2_5->append(resultString);
    }

    if(bandera2==5){
        ui->exec2_6->append(resultString);
    }

}

double MainWindow::cargarImagen(){



        QImage imagen;
        QRgb colores;
        int rojo, azul, verde;
      QString archivo = QFileDialog::getOpenFileName(
               this,
               tr("Open Document"),
               QDir::currentPath(),
               tr("Document files (*.jpg);;All files (*.*)") );

       QPixmap pixMap(archivo);
       imagen=pixMap.toImage();
       clock_t tiempo=clock();



       for (int i = 0; i < pixMap.width(); i++) {
           for (int j = 0; j < pixMap.height(); j++) {
                colores=imagen.pixel(i,j);
                rojo=250-qRed(colores);
                azul=250-qBlue(colores);
                verde=250- qGreen(colores);
                QPoint p(i,j);

                imagen.setPixel(p, qRgb(rojo,azul, verde));
           }
       }

       pixMap=pixMap.fromImage(imagen);

       QLabel *l= new QLabel();
       l->setPixmap(pixMap);
       l->show();

       tiempo = clock() - tiempo; //fin crono


       return (double)(tiempo)/CLOCKS_PER_SEC;


}


