#include<bits/stdc++.h>
using namespace std;
struct  node{
    int data;
    node * left;
    node * right;

};
node* getspace(int value){
    node* newnode = new node();
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
node* enter (node*root,int data){
    if(root == NULL){
        root = getspace(data);
    }
    else if(data>root->data){
        root->right = enter(root->right,data);
    }
    else if(data<root->data){
        root->left = enter(root->left,data);
    }
    else{
        cout<<"the value already in the tree "<<data<<endl;
   
    }
    return root;
}
void print(node* r){
    cout<<r->data<<" ";
    if(r->left!=NULL){
    print(r->left);
    }
    //cout<<r->data<<" ";
    if(r->right!=NULL){
    print(r->right);
    }
    //cout<<r->data<<" ";

}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
  int n,data;
  node * root = NULL;
  cin>>n;
//   cin>>data;
//   root=enter(root,data);
  for(int i=0;i<n;i++){
      int data;
      cin>> data;
      root = enter(root,data);
  }
  print(root);

}