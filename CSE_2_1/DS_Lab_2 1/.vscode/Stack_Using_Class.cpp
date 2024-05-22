#include<bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

class Stack{
private:

    int a[100];
    int tp;
public:
    Stack(){
        tp=-1;
        for(int i=0;i<100;i++){
            a[i]=0;
        }
    }
        void push(int val){
            tp++;
            if(tp==100){
                cout<<"stack overflow";
            }
            a[tp]=val;
        }
        void pop(){
           if(tp<0){
            cout<<"empty stack\n";
           }
           tp--;
        }
        int top(){
            if(tp<0)
            {
                cout<<"stack have no value";
                return -1;
            }
            return a[tp];
        }
        bool is_empty(){
		if(tp==0){
			return true;
		}
		return false;
	}

    };
    void ans(Stack s){
     while(!s.is_empty()){
 	cout<<s.top()<<' ';
 	s.pop();
 }
    }

int main(){
    Stack s;
    for(int i=0;i<9;i++){
        s.push(i);
    }
     //while(!s.is_empty()){
 	//cout<<s.top()<<' ';
 	//s.pop();
 //}
    ans(s);
   

}