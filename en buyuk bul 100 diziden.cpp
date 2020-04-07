#include<stdio.h>
int main (){
	int a[10];
	
	int i,k;
	for(i=0;i<10;i++){
	
	scanf("%d",&a[i]);
}
printf("veriler kaydedildi\n");
for(i=0;i<10;i++){
	
	printf("%d\n",a[i]);
}
int buyuk=0;
for(i=0;i<9;i++){
	for(k=i+1;k<10;k++){
		if(a[k]>a[i]){
			buyuk=a[k];
			
		}
	}
}
printf("buyuk is : %d",buyuk);
return 0;
}
