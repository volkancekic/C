#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct n{
	char name[20];
	int number;
	int result;
	n *next;
};
typedef n node;
int main (){
node *root;
node *iter;
root=(node *)malloc(sizeof(node));
iter=root;
iter->next=NULL;

strcpy(iter->name,"volkan");                  // char için böyle atama yapýlýr.

iter->number=006;
iter->result=86;

printf("results are: \n");
printf("name = %s ,number = %d ,result = %d .",iter->name, iter->number, iter->result);
return 0;
	
	}
