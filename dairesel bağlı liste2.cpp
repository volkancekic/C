#include<stdio.h>
#include<stdlib.h>

struct n{
	int x;
	n *next;
};
typedef n node;

int main () {
	
	node *root;
	node *iter;
	root=(node *)malloc(sizeof(node));
	iter=root;
	iter->x=10;
	iter->next= (node *)malloc(sizeof(node));
	iter=iter->next;
	iter->x=20;
	iter->next=(node *)malloc(sizeof(node));
	iter=iter->next;
	iter->x=30;
	iter->next=(node *)malloc(sizeof(node));
	iter=iter->next;
	iter->x = 40;
	iter->next=root;
	iter=root;
	
	printf("%d\n",iter->x);
	iter=iter->next;
	
	while(iter != root){  //ÝTER->NEXT !=ROOT DERSEK SON ELEMANI BASTIRMAZ.
		printf("%d\n",iter->x);
		iter=iter->next;
	}
	
	
	
	
	return 0;
}
