#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; // nokta sayýsý kaç x,y var ?

    printf("Enter a n : ");
    scanf("%d",&n);

    double dizix[n]; // x0,x1,x2,...
    double diziy[n]; // y0,y1,y2,...
    double x; // P(x)'in x'idir. x yerine koyulacak deger 
    int i;

    for(i=0;i<n;i++){
        printf("\nx%d : ",i);
        scanf("%lf",&dizix[i]);

        printf("y%d : ",i);
        scanf("%lf",&diziy[i]);
    }

    printf("\nEnter x of P(x) : ");
    scanf("%lf",&x);

    int k;
    double lagrange[n];

    // Lagrange hesaplarken carpim sembolunde surekli kendi ile carpim oldugundan
    // varsayilan olarak lagrange[k] degeri 1 kabul edildi.
    for(k=0;k<n;k++){
        lagrange[k] = 1; // Asagida lagrange hesaplarken surekli kendisiyle carpim olacagindan 1 koyduk.
    }

    // Finding Lagrange Of Samples
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            if(i == k)
                continue;
            lagrange[k] *= (x - dizix[i])/(dizix[k] - dizix[i]);
        }
    }

    double pX = 0;

    // Finding value of P(x)
    for(k=0;k<n;k++){
        pX += lagrange[k]*diziy[k];

        printf("\nlagrange[%d] = %f",k,lagrange[k]);
    }


    printf("\n\nApproximate p(x) = %f",pX);

    return 0;
}

