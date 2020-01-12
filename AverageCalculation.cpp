#include<stdio.h>

int main() {
	
	float vize=0;
	float final=0;
	float ortalama=0;
	float but=0;
	float kurtarma=0;
	int a;
	
    
    while(1){
    	printf("\n\nHESAPLAMA YAPMAK ICIN 1'E CIKMAK ICIN 0 'A ARDINDAN 'ENTER' A BASINIZ : ");
    	scanf("%d",&a);
    	if(a==0){
    		break;
		}
		
		else if (a==1){
			printf("\n\nVIZE NOTUNUZU GIRINIZ :  ");
			scanf("%f",&vize);
		
			while(vize<0 || vize>100){
				printf("\nHATALI GIRIS YAPTINIZ !\nLUTFEN VIZE NOTUNUZU TEKRAR GIRINIZ :  ");
				scanf("%f",&vize);
			}
			
			printf("FINAL NOTUNUZU GIRINIZ :  ");
			scanf("%f",&final);
			
				while(final<0 || final>100){
				printf("\nHATALI GIRIS YAPTINIZ !\nLUTFEN FINAL NOTUNUZU TEKRAR GIRINIZ :  ");
				scanf("%f",&final);
					
				}
				
				if(final<50){
					printf("FINALINIZ ' 50 ' NIN ALTINDA OLDUGU ICIN KALDINIZ..\n");
					but=60- (vize*40/100);
				kurtarma=but*100/60;
				if(kurtarma<50){
					kurtarma=50;
				}
				printf("\nGECEBILMENIZ ICIN BUTUNLEME SINAVINDAN '  %.0f  ' ALMANIZ GEREKIYOR.\n\n",kurtarma);
				continue;
			}
			
			ortalama=(vize*40/100) + (final*60/100);
			if(ortalama>=59.50 && ortalama<=59.99){
				ortalama=60;
			}
			
			if(ortalama>=60){
				
				if(ortalama>=89.50 ){
					printf("ORTALAMANIZ : '  %.0f  '   ' A1 ' ILE GECTINIZ TEBRÝKLER..\n\n",ortalama);
				}
				if(ortalama>=79.50 && ortalama<=89.49){
					printf("ORTALAMANIZ : '  %.0f  '   ' A2 ' ILE GECTINIZ TEBRÝKLER..\n\n",ortalama);
				}
				if(ortalama>=69.50 && ortalama<=79.49){
					printf("ORTALAMANIZ : '  %.0f  '   ' B1 ' ILE GECTINIZ TEBRÝKLER..\n\n",ortalama);
				}
				if(ortalama>=64.50 && ortalama<=69.49){
					printf("ORTALAMANIZ : '  %.0f  '   ' B2 ' ILE GECTINIZ TEBRÝKLER..\n\n",ortalama);
				}
				if(ortalama>=60 && ortalama<=64.49){
					printf("ORTALAMANIZ : '  %.0f  '   ' C ' ILE GECTINIZ TEBRÝKLER..\n\n",ortalama);
				}
			}
			else{
				printf("ORTALAMANIZ :  '  %.0f  ' KALDINIZ.\n\n",ortalama);
				but=60- (vize*40/100);
				kurtarma=but*100/60;
				if(kurtarma<50){
					kurtarma=50;
				}
				printf("\nGECEBILMENIZ ICIN BUTUNLEME SINAVINDAN '  %.0f  ' ALMANIZ GEREKIYOR.\n\n",kurtarma);
				
			
			}
				
			
		}
		else if(a!=1 || a!=0){
			printf("\nHATALI GIRIS YAPTINIZ !\n\n");
			break;
		}
    	
	}
	printf("\n\n\n\n\n\n\n\nBASARILAR DILERIZ...\n\n\n");
	return 0;
    
    
}
