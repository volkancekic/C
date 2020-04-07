#include<stdio.h>
#include<stdlib.h>

int *dizi;
int boyut=2;
int tepe=0;

int pop(){
	return dizi[--tepe];
	
}
void push(int a){
	dizi[tepe++]=a;
	
}
void bastir(){
	int i;
	for(i=0;i<tepe;i++){
		printf("%d\n",dizi[i]);
	}
}
int main (){
	dizi=(int *)malloc(sizeof(int)*2);
	push(1000);
	push(2000);
	bastir();
	pop();
	puts("poptan sonra");
	bastir();
	return 0;
}
	
