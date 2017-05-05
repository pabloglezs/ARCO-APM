#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label_2->setAlignment(Qt::AlignCenter);
    ui->label_3->setAlignment(Qt::AlignCenter);
    ui->label_4->setAlignment(Qt::AlignCenter);
    ui->label_5->setAlignment(Qt::AlignCenter);
    ui->label_6->setAlignment(Qt::AlignCenter);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->multiplicar->isChecked()){
        QString val1 = ui->valor1->toPlainText();
        val1.replace(",",".");
        float valor1 = val1.toFloat();
        QString val2 = ui->valor2->toPlainText();
        val2.replace(",",".");
        float valor2 = val2.toFloat();
        float result = valor1*valor2;
        ui->textEdit_2->setText(QString::fromStdString(to_string(result)));
    }

    if(ui->sumar->isChecked()){
        QString val1 = ui->valor1->toPlainText();
        float valor1 = val1.toFloat();
        QString val2 = ui->valor2->toPlainText();
        float valor2 = val2.toFloat();
    }

    if(ui->dividir->isChecked()){
        QString val1 = ui->valor1->toPlainText();
        float valor1 = val1.toFloat();
        QString val2 = ui->valor2->toPlainText();
        float valor2 = val2.toFloat();
    }

}
