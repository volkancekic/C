#include<stdio.h>
#include<string.h>

int main(){ //alfabetik olarak bakýlýyor.
	
	char a[]="merhaba";
	char b[]="selam";
	char c[]="not";
	
	printf("a: merhaba    b:selam     c:not\n");
	printf("a ile b   : %d",strcmp(a,b));
	printf("\n c ile b   :%d",strcmp(c,b));
	return 0;
	
}
