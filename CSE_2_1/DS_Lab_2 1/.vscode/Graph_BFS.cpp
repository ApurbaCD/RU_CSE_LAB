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
void bfs(int data){
   queue <int> q;
   q.push(data);
   cout<<q.front()<<" ";
   while(!q.empty()){
    int x = q.front();
    q.pop();
    vis[x]=1;
    nodeptr n = ar[x];
    while(n!=NULL){
        int d=n->data;
        if(!vis[d]){
            vis[d]=1;
            cout<<d<<" ";
            q.push(d);
        }
        n=n->next;
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
    bfs(0);
}