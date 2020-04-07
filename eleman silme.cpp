#include<stdio.h>
#include<stdlib.h>

struct n{
	int x;
	n *next;
};

typedef n node;

int main (){
	
	node *root;
	node *iter;
	root=(node *)malloc(sizeof(node));
	iter=root;
	iter->x=10;
	int i;
	for(i=10;i<50;i=i+10){
	
    iter->next=(node *)malloc(sizeof(node));
	iter=iter->next;
	iter->x=i+10;
	iter->next=NULL;

}

iter=root;
printf("listedeki elemanlar:\n");

while(iter!=NULL){
	printf("%d\n",iter->x);
	iter=iter->next;
}
printf("silinecek eleman 30\n\n");

iter=root;
iter=iter->next; // 20 yazan kutudayýz.

node *temp;
temp=iter->next; //silinecek kutuyu tutuyor;
iter->next=iter->next->next;
free(temp); //temp yani silinecek olan 30 yazan kutuyu ram den sildik.

printf("silindikten sonra elemanlar:\n\n");
iter=root;  // ÖNEMLÝ BU #################################################################
while(iter!=NULL){
	printf("%d\n",iter->x);
	iter=iter->next;
}


return 0;
	
}
