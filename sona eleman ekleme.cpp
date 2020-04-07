#include<stdio.h>
#include<stdlib.h>

struct ex2 {
	int x;
	ex2 *next;

};

typedef ex2 node;

int main (){
	
	node *root;
	node *iter;
	root=(node *)malloc(sizeof(node));
	iter=root;
	root->x =100;
	root->next=(node *)malloc(sizeof(node));
	iter=iter->next;
	iter->x=200;
	iter->next=(node *)malloc(sizeof(node));
	iter=iter->next;
	iter ->x =300;
	iter->next = NULL;
	
	iter=root;

// en sona gideceðiz.

while(iter->next != NULL){
	iter=iter->next;
}

iter->next=(node *)malloc(sizeof(node));
iter=iter->next;
iter->x=3000;
iter->next=NULL;

iter=root;
printf("1. kutunun degeri = %d \n",iter->x);
iter=iter->next;
printf("2. kutunun degeri = %d \n",iter->x);
iter=iter->next;
printf("3. kutunun degeri = %d \n",iter->x);
iter=iter->next;
printf("4. (eklenen) kutunun degeri = %d \n",iter->x);

return 0;

	
}
