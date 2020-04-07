#include<stdio.h>
#include<string.h>

int main (){
	char a[]="merhaba";
	
	printf("a dizi= merhaba\n");
	printf("strchr foonksiyonundan sonra\n");
	
	printf("%s",strchr(a,'e'));
	return 0;
	
	}
