#include<stdio.h>
int main(){
	int a[10];
	int i;
	int b ; 
	int c;
	printf("enter number\n");
	scanf("%d",&a[0]);
     b=a[0];
	printf("enter number\n");
	scanf("%d",&a[1]);
	c=a[1];
	int t;
	if(a[0]<a[1]){
		t=a[0];
		a[0]=a[1];
		a[1]=t;
		b=a[0];
		c=a[1];
	
	}
	
	for(i=2;i<10;i++){
		printf("enter nummber\n");
		scanf("%d",&a[i]);
		if(a[i]>b){
			c=b;
			b=a[i];
			
		}
		
	}
	for(i=0;i<10;i++){
		printf("elemanlar %d\n",a[i]);
	}
	printf("en byuk: %d\n",b);
	printf("ikinci %d",c);
	return 0;
}
