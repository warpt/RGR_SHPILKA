#include "tarr.h"
#include <math.h>

tArr::tArr(float Fs,float f,float ph,float A,int N)
    {cN = N;
     arr = QVector<double>(tArr::cN);
     cFs =Fs;
     cf=f;
     cph=ph;
     cA=A;
     int i;
     for(i=0;i<cN;i++)
           arr[i] = cA*cos(2*M_PI*cf*i/cFs+cph);
     ct=cN/cFs;
}
void tArr::step()
    {
    int i;
    for(i=0;i<cN;i++)
         arr[i] = cA*cos(2*M_PI*cf*(i/cFs+ct)+cph);
    ct=ct+cN/cFs;
    }

~tArr()
{
    //delete tArr::arr;
}
