#include<stdlib.h>
#include<stdio.h>

struct n{
	int x;
	n *next;
};
typedef n node;

void ekle(node *i,int number){
	while(i->next!=NULL){
		i=i->next;
		}
		i->next=(node *)malloc(sizeof(node));
		i=i->next;
		i->x=number;
		i->next=NULL;
}
void sil(node *ik,int numbr){
	while(ik->next->x!=numbr){
		ik=ik->next;
	}
	node *temp=(node *)malloc(sizeof(node));
	temp=ik->next;
	ik->next=ik->next->next;
	free(temp);
}
int main(){
	node *root=(node *)malloc(sizeof(node));
	node *iter;
	iter=root;
	iter->x=1000;
	iter->next=NULL;
	void ekle(node *,int);
	ekle(iter,2000);
	ekle(iter,3000);
	ekle(iter,4000);
	ekle(iter,5000);
	iter=root;
	while(iter!=NULL){
		printf("olanlar :%d\n",iter->x);
		iter=iter->next;
	}
	iter=root;
	void sil(node *,int);
	sil(iter,3000);
	iter=root;
	while(iter!=NULL){
		printf("silindikten sonra :%d\n",iter->x);
		iter=iter->next;
	}
	
	return 0;
}
