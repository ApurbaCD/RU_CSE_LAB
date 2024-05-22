#include<bits/stdc++.h>
using namespace std;
#define ll                long long int 
#define ull               unsigned long long int 
//#define vec             vector<int>
//copy from Mrinal da
#define vec               vector<ll>
#define vsort(v)          (v.begin(),v.end())
#define endline           cout<<"\n"
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define loop(i,a,b)       for(ll i=a;i<=b;i++)
#define loop1(i,a,b)      for(ll i=a;i>=b;i--)
const ll siz=2e5+7;
const ll INF=__LONG_LONG_MAX__;



void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>> n;

    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    for(int i=0;i<n;i++){
    if((s1[i]==s2[i])&&(s1[i]!=s3[i])){
        yes;
        return;
    }
    if(s1[i]!=s2[i]&&s1[i]!=s3[i] && s2[i]!=s3[i]){
        yes;
        return;
    }
  }
  no;

}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}