#include<stdio.h>
#include<stdlib.h>
struct n{
	n *prev;
	n *next;
	int x;
};
typedef n node;
void ekle(node *a,int data){
	while(a->next!=NULL){
		a=a->next;
	}
	a->next=(node *)malloc(sizeof(node));
	a->next->prev=a;
	a=a->next;
	a->x=data;
	a->next=NULL;
	
}


void tersprint(node *a){
	while(a->next!=NULL){
		a=a->next;
	}



	while(a->x!=NULL){
		printf("%d\n",a->x);
		a=a->prev;
	}
}
int main(){
	node *root;
	root=(node*)malloc(sizeof(int));
	root->next=NULL;
	root->prev=NULL;
	root->x=66;
	node *iter;
	iter=root;
	ekle(iter,48);
	ekle(iter,86);
	ekle(iter,98);

	tersprint(iter);
	
	return 0;
	
	
}
