//Link List in c++ using Structure
//
#include<iostream>
using namespace std;
struct node {
    int data;
    node * left;
    node *right;

};
node* get_location(int val,node * k){
     node * n = new node();
     n->data=val;
     n->right=NULL;
     n->left=k;
     return n;

}
node* store(node * n,int val){
    if(n->right==NULL){
        n->right=get_location(val,n) ;
    }
    else{
        store(n->right,val);
    }
    return n;

}
void print(node * p){
    cout<<p->data<<" ";
    if(p->right!=NULL){
        print(p->right);
    }

} 

int main(){
    //node* p=NULL;
    //p->left=NULL;
    //p->right=NULL;
    node* newnode = new node();
    newnode->right=NULL;
    for (int i=0;i<4;i++){
        int x;
        cin>>x;
        store(newnode,x);
    }
    print(newnode->right);    
}