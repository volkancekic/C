#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[100];
	char b[100];
	printf("enter a string : ");
	gets(a);
	int i=0;
	while(a[i]!=NULL){
		i++;
	}
	int j,k;
	for(j=i,k=0;j>=0,k<=i;j--,k++){
		b[k]=a[j];
		printf("%c",b[k]);
	}

	return 0;
}
