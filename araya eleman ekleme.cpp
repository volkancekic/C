#include<stdio.h>
#include<stdlib.h>

struct n {
	int x;
	n *next;
};

typedef n node;
int main () {
 node *iter;
 node *root;
	

    root=(node *)malloc(sizeof(node));
    iter=root;
    iter->x=10;
	
	iter->next=(node *)malloc(sizeof(node));
	iter=iter->next;
	iter->x=20;
	
    iter->next=(node *)malloc(sizeof(node));
    iter=iter->next;
    iter->x=40;
	iter->next=NULL;
    
    	iter=root;
printf("eklemeden once elemanlar 10 20 40 \n\n");

while(iter!=NULL){

	printf("%d\n",iter->x);
	iter=iter->next;
	
}


printf("eklenecek eleman 30 olsun ve 20 ile 40 arasýna koyalým...\n\n");

iter=root;
iter=iter->next;
node *temp;
temp=(node *)malloc(sizeof(node));
temp->x=30;
temp->next=iter->next;  //30 kutusunun sonunu 40 kutusuna bagladýk.
iter->next=temp;

iter=root;

while(iter!=NULL){

	printf("%d\n",iter->x);
	iter=iter->next;
	
}







return 0;
}
