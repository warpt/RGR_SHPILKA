#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lisagu.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::makePlot();
}

MainWindow::~MainWindow()
{
    delete ui;
}
//(float Fs,float f1,float ph1,float A1,float f2,float ph2,float A2,int N)
void MainWindow::makePlot()
{     Lisagu My_L(2000,2,0,1,2,M_PI/2,1,1000);

      // create graph and assign data to it:
      ui->customPlot->addGraph();    // give the axes some labels:
      ui->customPlot->graph(0)->setData(My_L.getX(), My_L.getY());
      ui->customPlot->xAxis->setLabel("s1");
      ui->customPlot->yAxis->setLabel("s2");

      // set axes ranges, so we see all data:
      ui->customPlot->xAxis->setRange(-1, 1);
      ui->customPlot->yAxis->setRange(-1, 1);
      ui->customPlot->graph(0)->setLineStyle(QCPGraph::lsNone);
      ui->customPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 1));
      ui->customPlot->replot();
}
