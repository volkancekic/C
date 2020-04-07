#include<stdio.h>
#include<stdlib.h>
struct n{
	int data;
	n *next;
};
typedef n node;

	node *root=NULL;
	node *son=NULL;
void enque(int x){
	if(root==NULL){
		root=(node *)malloc(sizeof(node));
		root->data=x;
		root->next=NULL;
		son=root;
	}
else {
	son->next=(node *)malloc(sizeof(node));
	son->next->data=x;
	son=son->next;
	son->next=NULL;
}
}	
int deque(){
	if(root==NULL){
		printf("linked list is empty");
		return -1;
	}
	int rvalue=root->data;
	node *temp=root;
	root=root->next;
	free(temp);
	return rvalue;
}
int main(){
	enque(10);
	enque(20);
	printf("%d",deque());
	return 0;
}
	

