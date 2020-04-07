#include<stdio.h>

int main() {
    int sayi,gecici,kalan,sonuc=0;
    printf("biir sayi giriniz:");
    scanf("%d",&sayi);
    gecici=sayi;
    while(gecici>0)
	{
		kalan=gecici%10;
		sonuc=sonuc*10+kalan;
		gecici/=10;
		
	}
	printf("%d nin tersi=%d",sayi,sonuc);
	return 0;
}

