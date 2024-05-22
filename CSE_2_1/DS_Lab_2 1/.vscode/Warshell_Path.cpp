// find out path matirx of an adjacency matrix with m nodes using warshell algorithm
#include<iostream>
using namespace std;
int a[10][10];
void input(int n,int e){
    a[n+1][n+1];
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
}
void warshell(int n){
    for(int k=1;k<n+1;k++){
        for(int j=0;j<n+1;j++){
            for(int i=0;i<n+1;i++){
                if(a[j][k]==1&&a[k][i]==1){
                    a[j][i]=1;
                }
            }
        }
    }
}
void print(int n){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    
   input(n,e);
   warshell(n);
   print(n);

}