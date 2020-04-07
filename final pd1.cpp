#include<stdio.h>
#include<stdlib.h>
int calculate(int [] ,int); //prototipi..  mainden önce
int main(){

	int a[100];
	int student;
	printf("enter student number: ");
	scanf("%d",&student);
	int j;
	int k=1;
for(j=0;j<student;j++){

	
		printf("%d . ogrenci notunu giriniz: ",k);
		scanf("%d",&a[j]); //dizide ampersand kullanılır mı?? 
		k++;
	
	}
	int dec=calculate(a ,student);
		printf("gecen ogrenci: %d ",dec);
	
		return 0;
}


int calculate(int a[],int student){
	double average=0;
	int i;
	int sayac=0;
	int sum=0;
	for(i=0;i<student;i++){
	
		if(a[i]>=60){
			sayac++;
		}
		sum=sum+a[i];
		
		
	}
	average=(double)sum/student;
	printf("average is %.2f\n",average);
	return sayac;
}
