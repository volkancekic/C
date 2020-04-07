#include <stdio.h>
#include <stdlib.h>

 struct example {
	int x;
	example *next;
};
typedef example node;
 int main (){
	 node *root;
	 node *iter;
	 root=(node *)malloc(sizeof(node));
	 iter=root;
	 iter -> x =10;
	 iter=iter-> next;
	 iter=(node *)malloc(sizeof(node));
	 iter->x = 20;
	 iter->next = NULL;
	 iter=root;
	 printf("%d",iter->x);
	 printf("%d",iter->next->x);
	 return 0;
	 
 }

