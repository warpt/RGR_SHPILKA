#include "lisagu.h"


    Lisagu::Lisagu(float Fs,float f1,float ph1,float A1,float f2,float ph2,float A2,int N)
    {
        Lisagu::s1 = new tArr(Fs,f1,ph1,A1,N);
        Lisagu::s2 = new tArr(Fs,f2,ph2,A2,N);
        Lisagu::Num = N;
    }
    void Lisagu::step()
    {
        Lisagu::s1->step();
        Lisagu::s2->step();
    }
    QVector<double> Lisagu::getX()
        {return Lisagu::s1->arr;}
    QVector<double> Lisagu::getY()
        {return Lisagu::s2->arr;}
    int Lisagu::getN()
    {return Lisagu::Num;}
    Lisagu::~Lisagu()
    {delete Lisagu::s1;
     delete Lisagu::s2;}

