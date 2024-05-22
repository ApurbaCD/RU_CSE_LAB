#include<iostream>
using namespace std;
struct node{
int data;
node * left;
node * right;
};
node* address(int value){
 node * newnode = new node();
 newnode->data = value;
 newnode->left = NULL;
 newnode->right = NULL;
 return newnode;
}
node* ans(int value,node *root){

    if(root==NULL){
        root=address(value);
    }
    else if(root->data>value){
        root->left = ans(value,root->left);
    }
    else if(root->data<value){
        root->right = ans(value,root->right);

    }
   return root;
}
void print(node*par){

    cout<< par->data<<" "; //preorder
    if(par->left!=NULL)
    print(par->left);
    //cout<< par->data<<" ";//inorder 
    if(par->right!=NULL)
    print(par->right);
   // cout<< par->data<<" ";//postorder

}
int main(){
    int n;
    cin>>n;
    int a;
    node * root=NULL;
    // cin>>a;
    // root = ans(a,root);
    for(int i=0;i<n;i++){
        cin>>a;
        root = ans(a,root);
    }
    print(root);

}