#include<stdio.h>
#include<stdlib.h>
struct n{
	n *left;
	n *right;
	int x;
};
typedef n node;
int max(node *tree){
	while(tree->right!=NULL){
		tree=tree->right;
	}
	return tree->x;
	
}
int min(node *tree){
	while(tree->left!=NULL){
		tree=tree->left;
	}
	return tree->x;
}
node *ekle(node *tree,int data){
	if(tree==NULL){
		node *root=(node *)malloc(sizeof(node));
		root->x=data;
		root->left=NULL;
		root->right=NULL;
		return root;
	}
	else {
	
	if(tree->x <data){
		tree->right=ekle(tree->right,data);
		return tree;
	}
	tree->left=ekle(tree->left,data);
	return tree;
}
}
node *sil(node *tree,int data){
if(tree==NULL){
	return NULL;
}
if(tree->x==data){
	if(tree->left==NULL && tree->right==NULL){
		return NULL;
	}
	if(tree->right!=NULL){
	
		tree->x=min(tree->right);	
		tree->right=sil(tree->right,min(tree->right));
		return tree;
		
	}
	tree->x=max(tree->left);
	tree->left=sil(tree->left,max(tree->left));
	return tree;
}
if(tree->x<data){
	tree->right=sil(tree->right,data);
	return tree;
}
tree->left=sil(tree->left,data);
return tree;
}
void dolas(node *tree){
	

	if(tree==NULL){         //�nemli bu k�s�m olmazsa kod hata verir.
		return ;
	}
	dolas(tree->left);
	printf("%d ",tree->x);
    dolas(tree->right);
    
    
    
}
int height(node *tree){
	if(tree==NULL){
		return 0;
	}
	else {
	int lefth=0;
	int righth=0;
lefth=height(tree->left);
righth=height(tree->right);
if(righth>lefth){
	return righth +1;
}
else{
	return lefth +1;
}

}
}
int nodee(node *tree){
	
	int i=0;
	int k=0;
	if(tree==NULL){         //�nemli bu k�s�m olmazsa kod hata verir.
		return 0 ;
	}
	i=nodee(tree->left);
	
    k=nodee(tree->right);
    return i+k+1;      //toplamda root ta dahil..
    
    
}
int main(){
	node *tree=NULL;
	tree=ekle(tree,100);
	tree=ekle(tree,200);
	tree=ekle(tree,35);
	tree=ekle(tree,23);
	tree=ekle(tree,150);
	tree=ekle(tree,36);
	dolas(tree);
    
    printf("%d height",height(tree));
    printf("%d node sayisi rootta dahil",nodee(tree));
    printf("%d soldaki node sayisi",nodee(tree->left));
    printf("\n%d sagdaki node sayisi",nodee(tree->right));
    printf("sag ve sol toplam� %d",nodee(tree)-1);
return 0;
}


