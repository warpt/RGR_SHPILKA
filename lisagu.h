#include "tarr.h"
#include <QMainWindow>
#ifndef LISAGU_H
#define LISAGU_H


class Lisagu
{
    tArr *s1;
    tArr *s2;
    int Num;
public:
    Lisagu(float Fs,float f1,float ph1,float A1,float f2,float ph2,float A2,int N);

    void step();

    QVector<double> getX();

    QVector<double>  getY();

    int getN();

    ~Lisagu();

};
#endif // LISAGU_H
