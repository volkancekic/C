#include<stdio.h>
#include<stdlib.h>
struct n{
	n *prev;
	n *next;
	int x;
};
typedef n node;

void ekle(node *i,int a){
	while(i->next!=NULL){
		i=i->next;
	}
	i->next=(node*)malloc(sizeof(node));
i->next->prev=i;                               // ÖNEMLÝ BU SATIR !!!
i=i->next;
i->x=a;
i->next=NULL;
	
}
int main(){
	node *root;
	root=(node *)malloc(sizeof(node));
	node *iter;
	iter=root;
	iter->prev=NULL;
	iter->next=NULL;
	void ekle(node *,int);
	iter->x=999;
	iter=root;
	ekle(iter,888);
	ekle(iter,777);
	while(iter!=NULL){
		printf("%d ",iter->x);
		iter=iter->next;
	}
	return 0;
}
