#include<stdio.h>
#include<stdlib.h>

int *dizi=NULL;
int sira=0;
int sirabasi=0;
int boyut=2;
int deque(){
	if(sira==sirabasi){
		printf("sira bos");
		return -1;
	}
	
		return dizi[sirabasi++]; //sýrabaþý 1 arttý ve o eleman döndü.
	
}

void enque(int a){
	if(dizi==NULL){
		dizi=(int*)malloc(sizeof(int)*2);
	}
	if(sira>=boyut){
		 //boyut 2 katýna çýktý zaten.
		int *dizi2 =(int *)malloc(sizeof(int)*boyut*2);
	    int i;
	    for(i=0;i<=boyut;i++){
	    	dizi2[i]=dizi[i];
	    	free(dizi);
	    	dizi=dizi2;
		}
		boyut*=2;
		
	}
	dizi[sira++]=a;
}
void toparla(){
	if(sirabasi==0){
		return ;  //fomk bitsin biþey kullanma anlamýnda.
	}
	int i;
	for(i=0;i<boyut;i++){
		dizi[i]=dizi[i+sirabasi];
	}
	sira-=sirabasi;  //sýrada sýrabasý kadar kaydýrýlsýn.
	sirabasi=0;
}
int main (){
	

enque(20);
enque(100);



	printf("%d",deque());

		return 0;
}
