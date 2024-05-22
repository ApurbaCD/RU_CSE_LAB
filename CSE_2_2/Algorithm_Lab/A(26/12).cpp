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
    int n,x,mn=INT_MAX,s=0,k;
    cin>>n>>k;
    vec v;
    loop(i,1,n){
        cin>>x;
        int tmp= abs(x-i);
        v.push_back(tmp);
        if(tmp!=0)
        mn=min(mn,tmp);
    }
    if(mn==INT_MAX){cout<<0;endline;return;}
    loop(i,0,n-1){
        if(v[i]%k!=0)s++;
    }
    if(s==0){cout<<0;endline;return;}
    if(s==2){cout<<1;endline;return;}
    cout<<-1;
    endline;
    return;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}