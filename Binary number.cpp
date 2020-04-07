#include<stdio.h>
#include<math.h>

int main(){
	char number[64];
	int c=0,s,j,i;
	double f,floating_number;
	printf("enter a binary number:   ");
	gets(number);
	if(number[0]=='0')
	s=0;
	else if(number[0]=='1')
	s=1;
	
	
	for(i=1;i<=11;i++){
		if(number[i]=='1'){
			c+=pow(2,(11-i));
		}
	}
	for(j=12;j<64;j++){
		if(number[j]=='1'){
			f+=pow(2,(11-j));
		}
	}
	floating_number=pow(-1,s)*pow(2,(c-1023))*(1+f);
	printf("\n\n%f",floating_number);
	return 0;
}
