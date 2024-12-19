/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *edLat;
    QLineEdit *edLon;
    QPushButton *btnCalc;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *edTime;
    QLabel *label_3;
    QLineEdit *edLine;
    QLabel *label_4;
    QLineEdit *edRadius;
    QLineEdit *edSpeed;
    QLabel *label_5;
    QLabel *label_6;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(330, 265);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(330, 265));
        MainWindow->setMaximumSize(QSize(330, 265));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(330, 232));
        centralwidget->setMaximumSize(QSize(330, 232));
        edLat = new QLineEdit(centralwidget);
        edLat->setObjectName(QString::fromUtf8("edLat"));
        edLat->setGeometry(QRect(20, 30, 141, 25));
        edLon = new QLineEdit(centralwidget);
        edLon->setObjectName(QString::fromUtf8("edLon"));
        edLon->setGeometry(QRect(170, 30, 141, 25));
        btnCalc = new QPushButton(centralwidget);
        btnCalc->setObjectName(QString::fromUtf8("btnCalc"));
        btnCalc->setGeometry(QRect(120, 200, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 67, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 10, 67, 17));
        edTime = new QLineEdit(centralwidget);
        edTime->setObjectName(QString::fromUtf8("edTime"));
        edTime->setGeometry(QRect(170, 66, 141, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 70, 121, 17));
        edLine = new QLineEdit(centralwidget);
        edLine->setObjectName(QString::fromUtf8("edLine"));
        edLine->setGeometry(QRect(170, 96, 141, 25));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 100, 131, 17));
        edRadius = new QLineEdit(centralwidget);
        edRadius->setObjectName(QString::fromUtf8("edRadius"));
        edRadius->setGeometry(QRect(170, 126, 141, 25));
        edSpeed = new QLineEdit(centralwidget);
        edSpeed->setObjectName(QString::fromUtf8("edSpeed"));
        edSpeed->setGeometry(QRect(170, 156, 141, 25));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 160, 121, 17));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 130, 121, 17));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CSV", nullptr));
        btnCalc->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\276\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\273\320\263\320\276\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", " \320\222\321\200\320\265\320\274\321\217 (\321\201)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \320\277\321\200\321\217\320\274\320\276\320\271 (\320\274)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 (\320\274/\321\201)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\264\320\270\321\203\321\201 (\320\274)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
