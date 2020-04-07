#include<stdio.h>
int main (){
	char a[50];
	printf("enter a string\t");
	gets(a);
	int i,p;
	
	int sayac=0;
while(a[i]!=NULL){

		
		if(a[i]=='a' && a[i+1]=='k'){
			sayac++;
		}
		i++;
	}
	puts(a); 
	printf(" kelimesinde %d kez ak kelimesi gecmistir..",sayac);
	
	return 0;
}
