#include<stdio.h>
int main(){
	char a[100];
	char b[100];
	printf("enter a string : ");
	gets(a);
	puts("2. string gir");
	gets(b);
	printf("%s",b);
	int i;
int k=0;
while(a[k]!=NULL){
	k++;
}
for(i=k;i>=0;i--){  //null var onu alm�yoruz -1 ile.
	printf("%c",a[i]);
}
return 0;
}
