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
    int n,k,l,r;
    vector<pair<int,int>>v;
    bool b1=false,b2=false;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        if((l==r)&&(l==k))b1=1;
        v.push_back({l,r});
    }
    if(b1){yes;return;}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if((v[i].first==v[j].second)&&(v[i].first==k)){
                b2=1;break;
            }
        }
    }
    if(b2){yes;return;}
    no;return;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        ans();
    }
}