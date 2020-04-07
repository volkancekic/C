#include<stdio.h>
#include<string.h>

int main(){
	char a[]="merhaba";
	char b[]="selam";
	
	printf("a[]=merhaba b[]=selam\n");
	printf("%s",strcat(a,b));
	
	printf("\n strcat ten sonra a dizisi=%s, b dizisi=%s",a,b);
	return 0;
}
