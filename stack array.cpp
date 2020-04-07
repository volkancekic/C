#include<stdio.h>
#include<stdlib.h>
int *array;
int tepe=0;
int boyut=2;

int pop(){
	if(tepe<boyut/2){
		int *array2=(int *)malloc(sizeof(int)*boyut/2);
		
	
	int i;
	for(i=0;i<boyut/2;i++){
		array2[i]=array[i];
	}
	free(array);
	array=array2;
	boyut=boyut/2;
	}
	return array[--tepe];    //sildiði deðeri geriye döndürür.
}
void push(int a){
	if(tepe>=boyut){
		int *array2=(int *)malloc(sizeof(int)*boyut*2);
		int i;
		for(i=0;i<boyut;i++){
			array2[i]=array[i];
			
		}
		free(array);
		array=array2;
		boyut=boyut*2;
	}
	array[tepe++]=a;
}
void print(){
	int i;
	for(i=0;i<tepe;i++){
		printf("%d ",array[i]);
	}
}
int main(){
	array=(int *)malloc(sizeof(int)*boyut*2);
	push(100);
	push(50);
	push(1000);
	push(250);
	push(4000);
	push(800);
	push(8000);
	
	
	print();
	printf("push : %d",pop());
	printf("\n");
print();

	return 0;
}
