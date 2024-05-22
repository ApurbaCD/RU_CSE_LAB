#include<bits/stdc++.h>
using namespace std;
void ans(int a[],int n,int i){
int larg=i;
int l=i*2;
int r=(i*2)+1;
if(l<n&&a[l]>a[larg]){
larg=l;
}
if(r<n&&a[r]>a[larg]){
larg=r;
}
if(larg!=i){
    swap(a[larg],a[i]);
    ans(a,n,larg);
}

}
void delt(int a[],int n,int i){
int last=a[n-1];
a[i]=last;
n=n-1;
ans(a,n,i);

}

void print (int a[],int n){
    for(int i=1;i<n-1;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
   int a[30]={0,10,6,5,2,4};
   int n=6;
   delt(a,n,1);
   print (a,n);

}