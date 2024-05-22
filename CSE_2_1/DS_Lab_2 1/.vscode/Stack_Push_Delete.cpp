#include<iostream>
using namespace std;
int a[100];
int top=-1,n=100;
void pop(){
    if(top<0){
        cout<<"stack is empty now\n";
        return;
    }
    cout<<"the value at the top of the stack  "<<a[top]<< "\n";
    top--;
}
void del(){
    if(top < 0){
        cout<<" the stack is empty\n";
        return;
    }
    top--;
    cout<<"the toped value is deleted which is "<<a[top+1]<<"\n";
}
void push(int value){
    top++;
    if(top==n){
        cout<<"stack overflow\n";
        return;  
    }
    a[top]=value;
}
int main(){
   for(int i=0;i<8;i++){
   string s;
   cin>>s;

   if(s == "pop"){
       pop();
   }
   if(s == "push"){
       int x;
       //cout<<"TAKE INPUT ";
       cin>>x;
       push(x);
   }
   if(s == "del"){
    del();
   }
   }

}