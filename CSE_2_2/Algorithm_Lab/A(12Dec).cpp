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
    ll n;
    cin>>n;
    if(n==4){cout<<1<<" "<<1;
    endline;
    return;}
    if(n<4){cout<<-1;
    endline;return;}
    if(n%2==1){cout<<-1;
    endline;return;}
    ll mn,mx,rmn,rmx;
    mn=n/6;
    rmn=n-(mn*6);
    mx=n/4;
    rmx=n-(mx*4);
    if((rmx==0)||(rmx==2)){
        if((rmn==4)||(rmn==0)||(rmn==2)){
            if((rmn==4)||(rmn==2)){
                cout<<mn+1<<" "<<mx;
                endline;return;
            }
            cout<<mn<<" "<<mx;
            endline;
            return;
        }
    }
    cout<<-1;
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