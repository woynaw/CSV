#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <algorithm>

#include <QVariant>
#include <QList>
#include <QStringList>
#include <QDir>
#include <QDebug>
#include <QtMath>
#include <iostream>
#include <math.h>
#include "include/qtcsv/variantdata.h"
#include "include/qtcsv/reader.h"
#include "include/qtcsv/writer.h"
#include <QGeoCoordinate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

double CalcDeltaDeg(double v, double dT, double R){
    return qRadiansToDegrees((v * dT)/R);
}

void MainWindow::on_btnCalc_clicked()
{
    QGeoCoordinate tochka;
    QGeoCoordinate tochka2;
    double timeF = 0.0;
    double startLat = 0;
    double startLon = 0;
    double radius = 0;
    int time_line = 0;
    double speed_circle = 0;
    int dist_line = 0;
    double alt = 0;
    double dDeg = 0;
    startLat = ui->edLat->text().toDouble();
    startLon = ui->edLat->text().toDouble();
    time_line = ui->edTime->text().toDouble();
    dist_line = ui->edLine->text().toDouble();
    radius = ui->edRadius->text().toDouble();
    speed_circle = ui->edSpeed->text().toDouble();

    tochka.setLatitude(startLat);
    tochka.setLongitude(startLon);
    QtCSV::VariantData varData;
    QStringList line;
    int iter_line = time_line / 0.1;
    double dist_iter = (dist_line / time_line)/10;
     QString filePath = QDir::currentPath() + "/all.csv";
    line << QString::number(timeF,'f',1) << QString::number(tochka.latitude(),'f',9) << QString::number(tochka.longitude(),'f',9) << QString::number(alt,'f',1);
    //line << '['+QString::number(tochka.latitude(),'f',9)+','+QString::number(tochka.longitude(),'f',9)+']';
    varData.addRow(line);
    line.clear();

    for (int j = 0; j<=iter_line;j++){
        timeF += 0.1;
        tochka2 = tochka.atDistanceAndAzimuth(dist_iter,0,0);
        line << QString::number(timeF,'f',1) << QString::number(tochka2.latitude(),'f',9) << QString::number(tochka2.longitude(),'f',9) << QString::number(alt,'f',1);
        tochka.setLatitude(tochka2.latitude());
        tochka.setLongitude(tochka2.longitude());

        //line << '['+QString::number(tochka2.latitude(),'f',9)+','+QString::number(tochka2.longitude(),'f',9)+']';
        //qDebug() << QString::number(tochka2.latitude(),'f',9) << ' ' << QString::number(tochka2.longitude(),'f',9);

        varData.addRow(line);
        line.clear();
    }
    //прямая готова

    double bearing = 0;
    dDeg = CalcDeltaDeg(speed_circle,0.1,radius);
    tochka = tochka.atDistanceAndAzimuth(radius,180,0);
    do {
         timeF += 0.1;
        tochka2 = tochka.atDistanceAndAzimuth(radius,bearing,0);
       // line << '['+QString::number(tochka2.latitude(),'f',9)+','+QString::number(tochka2.longitude(),'f',9)+']';
        line << QString::number(timeF,'f',1) << QString::number(tochka2.latitude(),'f',9) << QString::number(tochka2.longitude(),'f',9) << QString::number(alt,'f',1);
        varData.addRow(line);
        line.clear();
        bearing += dDeg;
    } while (bearing < 360);
   QtCSV::Writer writer;
   if ( false == writer.write(filePath, varData) )
   {
       qDebug() << "Ошибка записи";
   }
   if ( false == writer.write(QDir::currentPath() + "/all.csv", varData) )
   {
       qDebug() << "Ошибка записи";
   }

    qDebug() << "...Запись окружности окончена";

    //ui->lbRes->setText(QString::number( ui->edLat->text().toDouble() + ui->edLon->text().toDouble()));

}

