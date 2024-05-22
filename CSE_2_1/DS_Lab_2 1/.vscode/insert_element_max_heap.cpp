#include<bits/stdc++.h>
using namespace std;

void insert(int ary[],int n,int val){
int par=n/2;
//cout<<ary[par]<<endl;

if(ary[par]>0){
   if(ary[n]>ary[par]){
    swap(ary[par],ary[n]);
    insert(ary,par,val);
   // cout<<"PAR"<<par<<endl;
   }
   //cout<<"ok"<<endl;
}

}
void print(int n,int ary[]){
     for(int i=1;i<n;i++)
    cout<<ary[i]<<" ";   
}


int main(){
  //ios::sync_with_stdio(false);cin.tie(0);
    int ary[30]={0,10,5,3,2,4};
    int n=6;
    int value;
    cout<<"take input from user";
    cin>>value;
    ary[n]=value;
    insert(ary,n,value);
    //cin>>value;
    
   // cout<<sizeof(ary)<<endl;
    for(int i=1;i<10;i++)
    cout<<ary[i]<<" ";
    // cout<<endl;
    // ary[n+1]=value;
    // insert(ary,n,value);
    // for(int i=1;i<10;i++)
    // cout<<ary[i]<<" ";
 
}