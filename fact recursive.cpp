#include<stdio.h>
int fact(int a){
	if(a==1||a==0)
	return 1;
	
	return a * fact(a-1);
}

int main (){
	int number;
	scanf("%d",&number);
	printf("result is :%d", fact(number));
	return 0;
}
