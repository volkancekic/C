#include<stdio.h>
int fib (int number);
int main(){
	printf("%d",fib(4));
	return 0;
}
int fib(int number){
	if(number==0 || number==1){
		return number;
	}
	else {
		return fib(number-1)+fib(number-2);
	}
}
