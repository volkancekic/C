#include<stdio.h> 

// bu kodda boþluðuda sayýyýor if ifadesiyle bunu engelleyip sadece harfleride sayabiliriz.
int uzunlukbul (char * );

int uzunlukbul(char *a){
	
	
	int i=0;
	
	while(a[i] !='\0'){
		i++;
		
	}	
	return i;
}

int main(){
	
	char a[50];
	int uzunluk=0;
	puts("enter a string please\n");
	gets(a);
	
	uzunluk=uzunlukbul(a);
	
	printf("string uzunlugu = %d",uzunluk);
	return 0;
}
