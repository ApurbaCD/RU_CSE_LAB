//transform an infix into postfix expression 
#include<iostream>
using namespace std;
class stck{
    private:
    int tp;
    char a[100];
    public:
    stck(){
        tp=0;
    }
    void push(char c){
    tp++;
    a[tp]=c;
    }
    char top(){
    return a[tp];
    }
    void pop(){
        a[tp]=0;
        tp--;
    }
    bool empty(){
    if(tp==0){
      return true;
    }
    return false;
  }
};
int pre(char s){
    if(s=='^')return 4;
    else if(s=='*'||s=='/')return 3;
    else if(s=='+'||s=='-')return 2;
    else return 1;

}
string ans(string s){
    stck st;
    string result;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            result+=c;
        }
        else if(c=='('){
        st.push(c);
        }
        else if(c==')'){

        while(!st.empty()&&st.top()!='('){
            result+=st.top();
            st.pop();
        }
         if(!st.empty()){
        st.pop();
         }
        }
        else{
            //cout<<"OK"<<endl;
            while(pre(st.top())>=pre(c)){
                //cout<<"NOTOK"<<endl;
               result+=st.top();
               st.pop();
            }
                st.push(c);

        } 
    }
//     while(!st.empty()) {
//   if(st.top()!='(')result+=st.top();
//   st.pop();
//}
//cout<<result<<"\n";

    //cout<<"kl"<<endl;
    return result;
}

int main(){
    string s = "(A+(B*C-(D/E^F)*G)*H)";
    string s2="(A*B+C/D)";
    string s1=ans(s2);
    cout<<s1<<endl;

//ABC*DEF^/G*-H*+
}