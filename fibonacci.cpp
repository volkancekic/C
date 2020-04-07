#include<stdio.h>

int fib(int n){
	int a,b,c;
	a=1;
	b=1;
	int i;
	for(i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
	
}

int main (){
	int number;
	scanf("%d",&number);
	printf("%d",fib(number));
	return 0;
}
