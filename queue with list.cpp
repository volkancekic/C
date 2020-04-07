#include<stdio.h>
#include<stdlib.h>
struct n{
	n *next;
	int x;
};
typedef n node;
node *root=NULL;
node *iter=NULL;
void enque(int a){
	if(root==NULL){
		root=(node *)malloc(sizeof(node));
		root->x=a;
		root->next=NULL;
		iter=root;
			}
		else{
			iter=root;
			while(iter->next!=NULL){
				iter=iter->next;
			}
			iter->next=(node *)malloc(sizeof(node));
			iter=iter->next;
			iter->x=a;
			iter->next=NULL; }
}

int deque(){
	node *temp;
	temp=root;
	root=root->next;
	return temp->x;
}
void print(){
	iter=root;
	while(iter!=NULL){
		printf("%d ",iter->x);
		iter=iter->next;
	}
}
int main (){
	enque(100);
	enque(2000);
	enque(99);
	print();
	printf("deque yapildi..\n");
	
	deque();
	print();
}
