#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
class b_tree{
	  node *root;
	public:
	b_tree(){
		root=NULL;
	}
	
	void add_node(int data){
		node  *temp=new node;
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
		if(root==NULL){
			root=temp;
			root->left=NULL;
			root->right=NULL;
		}
		else{
			
			node *tmp1=new node;
			tmp1=root;
			
			while(tmp1!=NULL){
			
				if(data>tmp1->data){
					if(tmp1->right!=NULL){
					tmp1=tmp1->right;}
					else
					 {
					 	tmp1->right=temp;
					 	
					 	tmp1=NULL;	
					 }
					
						
				}
				else{
					if(tmp1->left!=NULL)
	                 tmp1=tmp1->left;
					else{
						tmp1->left=temp;
					
					     	tmp1=NULL;	
					}
				}
				
			}
		
		}
		
	}
	
	void preorder(node *tmp,int flg){
		if(tmp==NULL && flg==0)
		{  cout<<"PreOrder Traversal of BST:\t";
		   tmp=new node;
		   tmp=root;
      	}
		if(tmp){
			
		cout<<tmp->data<<" ";
		 
		preorder(tmp->left,1);
	    preorder(tmp->right,1);}
		
	}
	void inorder(node *tmp,int flg){
		if(tmp==NULL && flg==0)
		{  cout<<"InOrder Traversal of BST:\t";
		   tmp=new node;
		   tmp=root;
      	}
		if(tmp){
		inorder(tmp->left,1);
			
		cout<<tmp->data<<" ";
		 
		
	    inorder(tmp->right,1);}
		
	}
	
	void postorder(node *tmp,int flg){
		if(tmp==NULL && flg==0)
		{  cout<<"PostOrder Traversal of BST:\t";
		   tmp=new node;
		   tmp=root;
      	}
		if(tmp){
		postorder(tmp->left,1);
		postorder(tmp->right,1);
			
		cout<<tmp->data<<" ";
		 
		}
		
	}
	
	
};
int main(){
	b_tree bt;
	bt.add_node(10);
	bt.add_node(11);
	bt.add_node(1);
	bt.add_node(8);
	bt.add_node(7);
	node *tmp=NULL;
	bt.preorder(tmp,0);
	cout<<endl;
	bt.inorder(tmp, 0);
	cout<<endl;
	bt.postorder(tmp, 0);
}
