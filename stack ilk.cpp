#include<stdio.h>
int dizi[2];
int boyut=2;
int tepe=0;
int pop () {
	return dizi[--tepe];	
}
void push (int a){
	dizi[tepe++]=a;
		
}
void bastir(){
	int i;
	for(i=0;i<tepe;i++){
		printf("dizi elemanlarý \n%d\n",dizi[i]);
	}
}
int main (){
	push (10);
	push (20);
	bastir ();
	printf("popped %d \n",pop ());
printf("popped %d",pop ());
return 0;

}
