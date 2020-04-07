#include<stdio.h>
#include<string.h>

int main(){
	char a[]="merhaba";
	char b[]="selam";
	
	printf("strncpy(a,b,3):   %s ",strncpy(a,b,3));
	return 0;
}
