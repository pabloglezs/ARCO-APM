/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *boton1;
    QPushButton *boton1_2;
    QFrame *frame;
    QTextEdit *exec1_1;
    QTextEdit *exec1_2;
    QTextEdit *exec1_3;
    QTextEdit *exec1_6;
    QTextEdit *exec1_5;
    QTextEdit *exec1_4;
    QFrame *frame_2;
    QTextEdit *exec2_1;
    QTextEdit *exec2_2;
    QTextEdit *exec2_3;
    QTextEdit *exec2_6;
    QTextEdit *exec2_5;
    QTextEdit *exec2_4;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 698);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 201), stop:1 rgba(255, 255, 255, 180));"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 101, 101));
        label->setStyleSheet(QStringLiteral("background:transparent;"));
        label->setPixmap(QPixmap(QString::fromUtf8("../build-Benchmark-Desktop_Qt_5_8_0_MinGW_32bit-Debug/unnamed.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 40, 361, 51));
        QFont font;
        font.setFamily(QStringLiteral("Shabrina Free"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background:transparent;"));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 130, 186, 41));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("background-color:orange;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 130, 186, 41));
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("background-color:orange;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));
        label_5->setAlignment(Qt::AlignCenter);
        boton1 = new QPushButton(centralWidget);
        boton1->setObjectName(QStringLiteral("boton1"));
        boton1->setGeometry(QRect(90, 570, 75, 23));
        boton1->setStyleSheet(QStringLiteral("background-color: rgba(255, 124, 0, 0.3)"));
        boton1_2 = new QPushButton(centralWidget);
        boton1_2->setObjectName(QStringLiteral("boton1_2"));
        boton1_2->setGeometry(QRect(330, 570, 75, 23));
        boton1_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 124, 0, 0.3)"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 209, 181, 341));
        frame->setStyleSheet(QLatin1String("background: rgba(0,0,0,90);\n"
"border-radius:30px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        exec1_1 = new QTextEdit(frame);
        exec1_1->setObjectName(QStringLiteral("exec1_1"));
        exec1_1->setGeometry(QRect(20, 30, 151, 41));
        exec1_1->setStyleSheet(QStringLiteral("background:transparent;"));
        exec1_2 = new QTextEdit(frame);
        exec1_2->setObjectName(QStringLiteral("exec1_2"));
        exec1_2->setGeometry(QRect(20, 80, 151, 41));
        exec1_2->setStyleSheet(QStringLiteral("background:transparent;"));
        exec1_3 = new QTextEdit(frame);
        exec1_3->setObjectName(QStringLiteral("exec1_3"));
        exec1_3->setGeometry(QRect(20, 130, 151, 41));
        exec1_3->setStyleSheet(QStringLiteral("background:transparent;"));
        exec1_6 = new QTextEdit(frame);
        exec1_6->setObjectName(QStringLiteral("exec1_6"));
        exec1_6->setGeometry(QRect(20, 280, 151, 41));
        exec1_6->setStyleSheet(QStringLiteral("background:transparent;"));
        exec1_5 = new QTextEdit(frame);
        exec1_5->setObjectName(QStringLiteral("exec1_5"));
        exec1_5->setGeometry(QRect(20, 230, 151, 41));
        exec1_5->setStyleSheet(QStringLiteral("background:transparent;"));
        exec1_4 = new QTextEdit(frame);
        exec1_4->setObjectName(QStringLiteral("exec1_4"));
        exec1_4->setGeometry(QRect(20, 180, 151, 41));
        exec1_4->setStyleSheet(QStringLiteral("background:transparent;"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(280, 210, 181, 341));
        frame_2->setStyleSheet(QLatin1String("background: rgba(0,0,0,90);\n"
"border-radius:30px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        exec2_1 = new QTextEdit(frame_2);
        exec2_1->setObjectName(QStringLiteral("exec2_1"));
        exec2_1->setGeometry(QRect(20, 30, 151, 41));
        exec2_1->setStyleSheet(QStringLiteral("background:transparent;"));
        exec2_2 = new QTextEdit(frame_2);
        exec2_2->setObjectName(QStringLiteral("exec2_2"));
        exec2_2->setGeometry(QRect(20, 80, 151, 41));
        exec2_2->setStyleSheet(QStringLiteral("background:transparent;"));
        exec2_3 = new QTextEdit(frame_2);
        exec2_3->setObjectName(QStringLiteral("exec2_3"));
        exec2_3->setGeometry(QRect(20, 130, 151, 41));
        exec2_3->setStyleSheet(QStringLiteral("background:transparent;"));
        exec2_6 = new QTextEdit(frame_2);
        exec2_6->setObjectName(QStringLiteral("exec2_6"));
        exec2_6->setGeometry(QRect(20, 280, 151, 41));
        exec2_6->setStyleSheet(QStringLiteral("background:transparent;"));
        exec2_5 = new QTextEdit(frame_2);
        exec2_5->setObjectName(QStringLiteral("exec2_5"));
        exec2_5->setGeometry(QRect(20, 230, 151, 41));
        exec2_5->setStyleSheet(QStringLiteral("background:transparent;"));
        exec2_4 = new QTextEdit(frame_2);
        exec2_4->setObjectName(QStringLiteral("exec2_4"));
        exec2_4->setGeometry(QRect(20, 180, 151, 41));
        exec2_4->setStyleSheet(QStringLiteral("background:transparent;"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 610, 111, 20));
        label_4->setStyleSheet(QStringLiteral("background:transparent; color:rgba(0,0,0,0.2)"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 630, 111, 20));
        label_6->setStyleSheet(QStringLiteral("background:transparent; color:rgba(0,0,0,0.2)"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 650, 111, 20));
        label_7->setStyleSheet(QStringLiteral("background:transparent; color:rgba(0,0,0,0.2)"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 630, 221, 41));
        label_8->setStyleSheet(QStringLiteral("background:transparent; "));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "APM Benchmark.", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Algorithm 1", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Algorithm 2", Q_NULLPTR));
        boton1->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        boton1_2->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        exec1_1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 1:</p></body></html>", Q_NULLPTR));
        exec1_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 2:</p></body></html>", Q_NULLPTR));
        exec1_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 3:</p></body></html>", Q_NULLPTR));
        exec1_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 6:</p></body></html>", Q_NULLPTR));
        exec1_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 5:</p></body></html>", Q_NULLPTR));
        exec1_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 4:</p></body></html>", Q_NULLPTR));
        exec2_1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 1:</p></body></html>", Q_NULLPTR));
        exec2_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 2:</p></body></html>", Q_NULLPTR));
        exec2_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 3:</p></body></html>", Q_NULLPTR));
        exec2_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 6:</p></body></html>", Q_NULLPTR));
        exec2_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 5:</p></body></html>", Q_NULLPTR));
        exec2_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Execution 4:</p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">A</span>ndr\303\251s Garc\303\255a.</p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">P</span>ablo Gonz\303\241lez</p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">M</span>arco Garc\303\255a.</p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p>APM Benchmark.  \302\2512017</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
