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


vec v;
int n,x,cnt=0;
int rec(int val,int index){
    cnt++;
    if(index!=val)rec(v[val],index);
    return cnt;

}
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>n;
    v.push_back(0);
    loop(i,0,n-1){
        cin>>x;
        v.push_back(x);
    }
    loop(i,1,n){
        cnt=0;
        int tmp=rec(v[i],i);
        cout<<tmp<<" ";
    }
    endline;
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        v.clear();
        ans();
    }
}