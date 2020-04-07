#include<stdio.h>
#include<stdlib.h>
struct n{
	n *left;
	n *right;
	int data;
};
typedef n node;

node *ekle(node *tree,int x){
	if(tree==NULL){
		node *root=(node *)malloc(sizeof(node));
		root->left=NULL;
		root->right=NULL;
		root->data=x;
		return root;
	}
	else{
		if(tree->data<=x){
			tree->right=ekle(tree->right,x);
			return tree;
		}
		tree->left=ekle(tree->left,x);
		return tree;
	}
	
}
void min(node *tree){
	while(tree->left!=NULL){
		tree=tree->left;
	}
	printf("%d is min",tree->data);
}
int main(){
	node *tree=NULL;
	tree=ekle(tree,58);
	tree=ekle(tree,3);
	tree=ekle(tree,65);
	tree=ekle(tree,100);
	tree=ekle(tree,38);
	tree=ekle(tree,7);
	tree=ekle(tree,102);
	min(tree);
}
