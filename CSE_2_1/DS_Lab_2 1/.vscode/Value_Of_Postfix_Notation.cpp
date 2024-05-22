#include<bits/stdc++.h>
using namespace std;
int conversion(string s){
    stack<int>st;
    for(int i=0;i<s.size();++i){
        if(s[i]==','){
            continue;
        }

        if(isdigit(s[i])){
            int k=1,sum=0;
            while(s[i]!=','){
                sum=sum*k+(s[i++]-'0');
                k=k*10;
            }
            st.push(sum);
            //cout<<"KJ"<<sum<<endl;
            i--;
        }
        
        //cout<<st.top()<<endl;
        else{
            //cout<<"s"<<s[i]<<endl;
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();
            if(s[i]=='+'){
                st.push(val1+val2);
            }
            else if(s[i]=='-'){
                st.push(val1-val2);
            }
            else if(s[i]=='*'){
                st.push(val1*val2);
            }
            else if(s[i]=='/'){
                st.push(val1/val2);
            }
            

        }
    }
    // cout<<"jk";
    // cout<<st.top();
    return st.top();
    //cout<<st.top();

}
int main(){
    string s="5,6,2,+,*,12,4,/,-";
    int k=conversion(s);
    cout<<k<<endl;
    return 0;
}