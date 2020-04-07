#include<stdio.h>
int fac (int number);
int main(){
	printf("%d",fac(3));
	return 0;
}
int fac(int number){
	if(number<=1){
		return 1;
	}
	else {
		return (number * fac(number-1));
	}
}
