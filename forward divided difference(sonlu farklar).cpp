#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter  n : ");
    scanf("%d",&n);

    double dizix[n]; // sample'larýn x degerleri.
    double diziy[n][n]; // sample'larýn y degerleri ilk sutunda, diger sutunlar delta y'ler
    double x; // y degeri bulunmasý istenen x degeri.
    double result; // istenen x degerine gore yaklasik degeri tutar.
    double temp;
    int i; // sutun numarasi
    int j; // satir numarasi


    // x degeri girilir
    printf("Enter a x value : ");
    scanf("%lf",&x);


    dizix[0] = 1.0;
    dizix[1] = 1.3;
    dizix[2] = 1.6;
    dizix[3] = 1.9;
    dizix[4] = 2.2;

    diziy[0][0] = 0.7651977;
    diziy[1][0] = 0.6200860;
    diziy[2][0] = 0.4554022;
    diziy[3][0] = 0.2818186;
    diziy[4][0] = 0.1103623;


    // Delta Y'ler bulundu. ( y matrisinin ilk satiri(ilk sutun haric, cunku ilk sutun sample y'leri) )
    for(i=1; i<n; i++){ // i, 1'den baslatilir. Cunku ilk sutun sample'ýn y'leri. Deltalar sonraki sutunlarda basliyor.
        for(j=0; j<n-i; j++){ // size-i yapilarak matris diagonal yapilmis olur.
            diziy[j][i] = (diziy[j+1][i-1] - diziy[j][i-1]) / (dizix[i+j] - dizix[j]);
        }
    }

    result = diziy[0][0]; // Formulun ilk term'u. Diger term'leri asagida eklenir.

    // Yaklasik sonuc bulunur.
    for(i=1;i<n;i++){ // y matrisinin ilk sutununu kullanmayacagimiz icin i 1'den baslatildi.
        temp = 1; // Her defasinda temp 1'lenir.
        for(j=0;j<=i-1;j++){
            temp *= x - dizix[j];
        }

        result += diziy[0][i]*temp;

    }

    printf("Approximate P(%f) is %f",x,result);

    return 0;
}

