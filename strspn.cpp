#include<stdio.h>
#include<string.h>

int main(){
	char a[]="nargile"; //2. karakterde dahil ortak olan kısım
	char b[]="nahos";
	
	printf("strspn : %d ",strspn(a,b));
	return 0;
}
