#include<stdio.h>

int kelimeSayisi(char *); //prototip

int kelimeSayisi(char *a){
	int i=0;
	int k=0;
	while(a[i] != '\0'){
		if(a[i]== ' '){
			k++;
		}
		i++;
		
	}
	return k+1;
}




int main(){
	int sayi;
	char a[90];
	puts("enter a string please\n");
	gets(a);
	
	sayi=kelimeSayisi(a);
printf("the number of string is =%d\n",sayi);
return 0;


}
