//transform an infix to postfix expression using method 
#include<bits/stdc++.h>
using namespace std;
int  precedance (char c){
    if(c=='^')return 4;
    if(c=='*'||c=='/')return 3;
    if(c=='+')return 2;
    if(c=='-')return 2;
    else return 0;


}
string transform(string s){
    stack<char>st;
    string result;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            result+=c;
        }
        else if(s[i] == '('){
        st.push(c);
        }
        else if(s[i] == ')'){
           while(st.top()!='(') {
               result+=st.top();
               st.pop();
           }
           st.pop();
        }
        else{
            while(!st.empty()&& precedance(s[i])<=precedance(st.top())){
             result += st.top();
             st.pop();   
            }
            st.push(c);
        }

    }
    return result;
}

int main(){
    string  s = "(A+(B*C-(D/E^F)*G)*H)";
    string s1="(a+b*(c^d-e)^(f+g*h)-i)";
    string ss=transform(s);
    cout<<ss<<endl;

}