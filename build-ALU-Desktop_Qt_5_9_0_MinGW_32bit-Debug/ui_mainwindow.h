/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QTextEdit *valor1;
    QTextEdit *valor2;
    QTextEdit *valorbin1;
    QTextEdit *valorbin2;
    QRadioButton *sumar;
    QRadioButton *multiplicar;
    QRadioButton *dividir;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(649, 487);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(9, 186, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 631, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(22);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background:transparent;"));
        label->setTextFormat(Qt::PlainText);
        valor1 = new QTextEdit(centralWidget);
        valor1->setObjectName(QStringLiteral("valor1"));
        valor1->setGeometry(QRect(110, 130, 121, 31));
        QFont font1;
        font1.setPointSize(12);
        valor1->setFont(font1);
        valor1->setStyleSheet(QStringLiteral("background:white;"));
        valor2 = new QTextEdit(centralWidget);
        valor2->setObjectName(QStringLiteral("valor2"));
        valor2->setGeometry(QRect(110, 170, 121, 31));
        valor2->setFont(font1);
        valor2->setStyleSheet(QStringLiteral("background:white;"));
        valorbin1 = new QTextEdit(centralWidget);
        valorbin1->setObjectName(QStringLiteral("valorbin1"));
        valorbin1->setGeometry(QRect(240, 130, 391, 31));
        valorbin1->setFont(font1);
        valorbin1->setStyleSheet(QStringLiteral("background:white;"));
        valorbin1->setReadOnly(true);
        valorbin2 = new QTextEdit(centralWidget);
        valorbin2->setObjectName(QStringLiteral("valorbin2"));
        valorbin2->setGeometry(QRect(240, 170, 391, 31));
        valorbin2->setFont(font1);
        valorbin2->setStyleSheet(QStringLiteral("background:white;"));
        valorbin2->setReadOnly(true);
        sumar = new QRadioButton(centralWidget);
        sumar->setObjectName(QStringLiteral("sumar"));
        sumar->setGeometry(QRect(80, 230, 82, 31));
        sumar->setStyleSheet(QStringLiteral("background:transparent;"));
        sumar->setChecked(true);
        multiplicar = new QRadioButton(centralWidget);
        multiplicar->setObjectName(QStringLiteral("multiplicar"));
        multiplicar->setGeometry(QRect(80, 250, 82, 31));
        multiplicar->setStyleSheet(QStringLiteral("background:transparent;"));
        dividir = new QRadioButton(centralWidget);
        dividir->setObjectName(QStringLiteral("dividir"));
        dividir->setGeometry(QRect(80, 270, 82, 31));
        dividir->setStyleSheet(QStringLiteral("background:transparent;"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 350, 591, 31));
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QStringLiteral("background:white;"));
        textEdit->setReadOnly(true);
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 420, 291, 31));
        textEdit_2->setFont(font1);
        textEdit_2->setStyleSheet(QStringLiteral("background:white;"));
        textEdit_2->setReadOnly(true);
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(330, 420, 291, 31));
        textEdit_3->setFont(font1);
        textEdit_3->setStyleSheet(QStringLiteral("background:white;"));
        textEdit_3->setReadOnly(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 400, 291, 20));
        label_2->setStyleSheet(QStringLiteral("BACKGROUND:TRANSPARENT;"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 400, 291, 20));
        label_3->setStyleSheet(QStringLiteral("BACKGROUND:TRANSPARENT;"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 330, 591, 20));
        label_4->setStyleSheet(QStringLiteral("BACKGROUND:TRANSPARENT;"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 140, 71, 16));
        label_5->setStyleSheet(QStringLiteral("BACKGROUND:TRANSPARENT;"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 180, 71, 16));
        label_6->setStyleSheet(QStringLiteral("BACKGROUND:TRANSPARENT;"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 240, 211, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 127);"));
        pushButton->setFlat(false);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "APM Calculator", Q_NULLPTR));
        sumar->setText(QApplication::translate("MainWindow", "Sumar", Q_NULLPTR));
        multiplicar->setText(QApplication::translate("MainWindow", "Multiplicar", Q_NULLPTR));
        dividir->setText(QApplication::translate("MainWindow", "Dividir", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Resultado en DECIMAL", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Resultado en HEXADECIMAL", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Resultado en COMA FLOTANTE", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "VALOR 1", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "VALOR 2", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "GO", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
