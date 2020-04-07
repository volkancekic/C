#include<stdio.h>

int fakt(int a){
	int result=1; //önemli yoksa 0 çýkýyor.
	int i;
	for(i=1;i<=a;i++){
		result=result*i;
	}
	return result;
	
	
}

int main (){
	int number;
	scanf("%d",&number);
	
	
	

	printf("result2:\t%d",fakt(number));
	return 0;
}
