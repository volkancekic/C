#include<stdio.h>
int main (){
	int a;
	int i=2;
	int asal=0;

	
	printf("enter number :  ");
	scanf("%d",&a);
	while(i!=a-1){
		
		
		if((a%i) ==0){
			asal++;
			
		}
	
		
		i++;
		
	}
	if(asal>0){
		printf("asal degil");
	}
	else if(asal==0){
		printf(" asal");
	}

	return 0;
}
