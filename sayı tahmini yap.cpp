#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {

int number=0;
int w;
int a,b,c;

printf("KURAL :\n\nOYUNDA BILGISAYAR TARAFINDAN RASTGELE\n1-9 ARASINDAN BIR ADET SAYI TUTULUR.\n");
printf("OYUNCUNUN UC KEZ SAYIYI TAHMIN ETME \nHAKKI VARDIR.\n\nBOL SANSLAR...\n\n");

while(1) {
printf("\n\n   HAZIRSAN 1 'E BAS VE SAYI TUTULSUN < CIKMAK ICIN 0 'A BAS  > : ");
scanf("%d",&w);
if(w==1){
	srand(time(NULL));
    number=(rand () % 9 )+1;
    printf("<  1 2 3 4 5 6 7 8 9  > ARASINDAN 1 ADET SAYI TUTULDU .\n\n\n");
    printf("ILK TAHMÝNÝN : ");
    scanf("%d",&a);
    if(a==number){
    	printf("TEBRIKLER TAHMININ DOGRU !!!\n");
	}
	else if(a!=number){
		if(a<number){
		
		printf("YANLIS TAHMIN ! (DAHA BUYUK SAYI GIR)\n"); 
		scanf("%d",&b);
		if(b==number){
			printf("TEBRIKLER TAHMININ DOGRU !!!\n");
		}
		else if(b<number){
			printf("YANLIS TAHMIN ! (DAHA BUYUK SAYI GIR)\n");
			scanf("%d",&c);
			if(c==number){
				printf("TEBRIKLER TAHMININ DOGRU !!!\n");
			}
			
			else {
				printf("TAHMÝN HAKKINIZ DOLDU TUTULAN SAYI : %d",number);
			}
		}
		else {
		
		    printf("YANLIS TAHMIN ! (DAHA KUCUK SAYI GIR)\n"); 
		    scanf("%d",&c);
		    if(c==number){
			printf("TEBRIKLER TAHMININ DOGRU !!!\n");
			}
			
			else {
				printf("TAHMÝN HAKKINIZ DOLDU TUTULAN SAYI : %d",number);
			}
			
			
		}
	
		}
		else{
			printf("YANLIS TAHMIN ! (DAHA KUCUK SAYI GIR)\n"); 
		    scanf("%d",&b);
		    if(b==number){
			printf("TEBRIKLER TAHMININ DOGRU !!!\n");
		}
		else if(b<number){
			printf("YANLIS TAHMIN ! (DAHA BUYUK SAYI GIR)\n");
			scanf("%d",&c);
			if(c==number){
				printf("TEBRIKLER TAHMININ DOGRU !!!\n");
			}
			
			else {
				printf("TAHMÝN HAKKINIZ DOLDU TUTULAN SAYI : %d",number);
			}
		}
		else {
		
		    printf("YANLIS TAHMIN ! (DAHA KUCUK SAYI GIR)\n"); 
		    scanf("%d",&c);
		    if(c==number){
			printf("TEBRIKLER TAHMININ DOGRU !!!\n");
			}
			
			else {
				printf("TAHMÝN HAKKINIZ DOLDU TUTULAN SAYI : %d",number);
			}
			
			
		}
	
		    
		    
		}
		
	}
    
}

else if(w==0){
	break;
}
else if (w!=0 || w!=1) {

	printf("HATALI GIRIS YAPTINIZ !!!\n");
	break;
}



}

return 0;
}

