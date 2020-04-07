#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Sayisal bir yontem olan Trapezoid kurali ile integral alinir.

int main()
{
    double a = 0; // Yamugun Tavani
    double b = 0.8; // Yamugun Tabani
    double h; // Yamugun Yuksekligi
    int n = 8; // Integral Alincak Bolgedeki Yamuk Sayisi
    double f[n+1];
    double x[n+1];
    double T = 0; // Yaklasik integral ile hesaplanan alani tutar.
    int i;

    h = (b-a)/n;
    x[0] = a;

    // x degerleri bulunur.
    for(i=0;i<n;i++){
        x[i+1] = x[i] + h;
    }

    // Soruda verilen denklem kullanilarak f(x0),f(x0+h), f(x0+2h),... degerleri bulunur.
    for(i=0;i<=n;i++){
        f[i] = 0.2 + 25*x[i] - 200*pow(x[i],2) + 675*pow(x[i],3) - 900*pow(x[i],4) + 400*pow(x[i],5);
        printf("f[%d] = %lf\n",i,f[i]);
    }

    // Trapezoid kurali uygulanir.
    for(i=0;i<=n;i++){
        if(i==0 || i==n)
            T += f[i]*(h/2);
        else
            T += 2*f[i]*(h/2);
    }


    printf("Trapezoid ile bulunan Alan :  %lf",T);

    return 0;
}

