// graph and their application 
// 1 . write program that takes an adjacent matrix A with m vertics as input output fowling 
// (a):adjacent of v1,v2,...,vm
// (b):no.path of length 2 from vi to vj;
// (c):no.path of length 3 from vi to vj;
// (d):no.path of length 4 from vi to vj;

#include<iostream>
using namespace std ;
int mat[100][100][100];
int n,e,a,b,sum=0;
int find(int i1,int j1,int l){
    for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
       // cout<<mat[4][i][j]<<" ";
        if(mat[l][i][j]>0&&i==i1&&j==j1){
        return mat[l][i][j];
        }
    }
    }
    return 0;
}

int main(){
    
    cin>>n>>e;
    mat[5][n+1][n+1];
    for(int i=0;i<e;i++){
        cin>>a>>b;
        mat[1][a][b]=1;
    }
    // for(int i=1;i<n+1;i++){
    // for(int j=1;j<n+1;j++){
    //     cout<<mat[1][i][j]<<" ";
    // }
    // cout<<"\n";
    // }
    for(int t=2;t<5;t++){
    for(int k=1;k<n+1;k++){
    for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
       sum+=mat[1][k][j]*mat[t-1][j][i]; 
    }
    mat[t][k][i]=sum;
    sum=0;
    }
    }
    }
    // for(int i=1;i<n+1;i++){
    // for(int j=1;j<n+1;j++){
    //     cout<<mat[4][i][j]<<" ";
    // }
    // cout<<"\n";
    // }
    for(int i=0;i<3;i++){
        int i1,j1,l;
        cin>>i1>>j1>>l;
        int val=find(i1,j1,l);
        cout<<val<<endl;
    }


}