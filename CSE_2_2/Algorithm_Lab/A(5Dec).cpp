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
    ll n,m,nodd=0,neven=0,modd=0,meven=0,x;
    cin>>n;
    loop(i,0,n-1){
        cin>>x;
        if(x%2==0){
            neven++;continue;
        }
        nodd++;
    }
    cin>>m;
    loop(i,0,m-1){
        cin>>x;
        if(x%2==0){
            meven++;continue;
        }
        modd++;
    }
    ll sum= (nodd*modd)+(meven*neven);
    cout<<sum;
    endline;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}