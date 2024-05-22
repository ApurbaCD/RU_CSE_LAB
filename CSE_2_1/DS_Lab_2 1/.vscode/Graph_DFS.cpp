// linked representation of graph enter some data and read those data from the graph
#include<bits/stdc++.h>
using  namespace std;
bool vis[100];
struct node{
    int data ;
    node * next;
};
typedef struct node *nodeptr;
nodeptr ar[5];
//node * ar[5]; //that also right nahole sob nodeptr e *node likhbo
nodeptr getloc(int data){
    nodeptr  n =new node();
    n->data=data;
    n->next=NULL;
    return n ;
}
void insert(int a , int b){
    nodeptr n = getloc(b);
    if(ar[a]==NULL){
        ar[a]=n;
        return;
    }
    nodeptr p = ar[a];
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=n;


}
void print(){
    for(int i=0;i<4;i++){
        cout<<i<<" : ";
        nodeptr p = ar[i];
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
        } 
        cout<<endl;
    }
}
void dfs(int data){
    stack<int> s;
    vis[data]=true;
    s.push(data);
    while(!s.empty()){
        int tmp=s.top();
        cout<<s.top()<<" ";
        s.pop();
        nodeptr p = ar[tmp];
        while(p != NULL){
            int l=p->data;
            if(vis[l]){
            p=p->next;
            continue;
            }
            vis[l]=true;
            s.push(l);
        }
    }

}
int main(){

       for(int i=0;i<5;i++)
    {
        ar[i]=nullptr;
    }
    //cout<<"Enter your number of node and edge : ";
    int nd,ed;
    cin>>nd>>ed;
    for(int i=1;i<=ed;i++)
    {
        int a,b;
        cin>>a>>b;
        insert(a,b);
    }
   // print();
    dfs(0);
}