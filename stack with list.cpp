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
	node *temp;
	temp=i->next;
	i->next=NULL;
	printf("%d",temp->data);
	free(temp);
}

void print(node *iter){
	while(iter!=NULL){
		printf("%d ",iter->data);
		iter=iter->next;
	}
}

void push(node *i,int a){
	if(i==NULL){
		node *iter=(node *)malloc(sizeof(node));
		i->next=NULL;
		i->data=a;
	}
	while(i->next!=NULL){
		i=i->next;
		
	}
	i->next=(node *)malloc(sizeof(node));
    i=i->next;
    i->data=a;
    i->next=NULL;
}
int main(){
node *root=(node *)malloc(sizeof(node));
root->data=55;
root->next=NULL;
node *iter;
iter=root;
	push(iter,2);
    push(iter,5);
    push(iter,7);
    push(iter,10);
    push(iter,23);
    push(iter,8);
    push(iter,16);
    push(iter,28);
    push(iter,28);
    push(iter,30);
    iter=root;
    print(iter);
    pop(iter);
    printf("\n");
    print(iter);
   
    return 0;
    
}
