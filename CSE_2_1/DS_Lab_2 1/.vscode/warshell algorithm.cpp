// shortest path in weighted graph using warshell algorithm  

#include<iostream>
using namespace std;
int a[4][4];

void takeinput(){
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++){
        cin>>a[i][j];
        if (a[i][j]==0){
            a[i][j]=500;
        }
    }
}
void out(){
    for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(a[i][j]==500){
            cout<<0<<" ";
            continue;
        }
        cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void warrshell (){
    for(int k=0;k<4;k++){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
            }
        }
    }
}
int main(){
takeinput();
warrshell();
out();
}