#include<stdio.h>
#include<stdlib.h>
struct n{
	n *next;
	int data;
};
typedef n node;
void pop(node *i){
	while(i->next->next!=NULL){
		i=i->next;
	}
	i->next=NULL;

	
}

void push(node *temp,int a){
	

	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=(node *)malloc(sizeof(node));
	temp=temp->next;
	temp->data=a;
	temp->next=NULL;
}

int main(){
	node *root;
	node *iter;
	root=(node *)malloc(sizeof(node));
	
	iter=root;
	iter->data=50;
	iter->next=NULL;
	iter=root;
	push(iter,250);
	push(iter,750);
	push(iter,500);
	pop(iter);
	iter=root;
	while(iter!=NULL){
		printf("%d\n",iter->data);
		iter=iter->next;
	}
	printf("sonuc olarak 500 silindi");
	return 0;
}
