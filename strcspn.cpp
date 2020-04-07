#include<stdio.h>
#include<string.h>

int main(){
	char a[]="merhasba";
	char b[]="s";

	printf("%d",strcspn(a,b)); 
	return 0;
	
}
