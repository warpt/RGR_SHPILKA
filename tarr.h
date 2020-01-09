#include <QMainWindow>
#ifndef TARR_H
#define TARR_H


class tArr
{
    float ct;
    float cFs,cf,cph,cA;
    int cN;
public:
    QVector<double> arr;
    tArr(float Fs,float f,float ph,float A,int N);

    void step();

    ~tArr();

};

#endif // TARR_H
