#include<stdio.h>
#include<stdlib.h>
struct n{
	n *left;
	n *right;
	int x;
};
typedef n node;

int min(node *i){
	while(i->left!=NULL){
		i=i->left;
	}
	return i->x ;
}
int max(node *i){
	while(i->right!=NULL){
		i=i->right;
	}
	return i->x;
}

node *ekle(node *i,int a){
	if(i==NULL){
		i=(node *)malloc(sizeof(node));
		i->left=NULL;
		i->right=NULL;
		i->x=a;
		return i;
	}
	if(i->x<a){
		i->right=ekle(i->right,a);
		return i;
	}
	i->left=ekle(i->left,a);
	return i;
}
void dolas(node *i){
	if(i==NULL){
		return ;
	}
	dolas(i->left);
	printf("%d ",i->x);
	dolas(i->right);
}
int main(){
	node *root;
	root=NULL;
	root=ekle(root,500);
	root=ekle(root,300);
	root=ekle(root,250);
	root=ekle(root,400);
	root=ekle(root,600);
	root=ekle(root,550);
	root=ekle(root,650);
	dolas(root);
	printf("min is : %d ",min(root));
	printf("max is : %d ",max(root));
	return 0;
}
