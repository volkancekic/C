#include<stdio.h>
#include<stdlib.h>
struct n{
	int data;
	n *left;
	n *right;
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
	else {
		if(tree->data<x){
			tree->right=ekle(tree->right,x);
			return tree;
		}
		tree->left=ekle(tree->left,x);
	return tree;
	}
	
	
}
void dolas(node *tree){
	if(tree==NULL){
		return ;
	}
	dolas(tree->left);
	printf("%d ",tree->data);
	dolas(tree->right);
}

int main (){
	node *tree=NULL;
	tree=ekle(tree,58);
	tree=ekle(tree,8);
	tree=ekle(tree,65);
	tree=ekle(tree,100);
	tree=ekle(tree,64);
	tree=ekle(tree,38);
	tree=ekle(tree,7);
	dolas(tree);
    
	return 0;
}
