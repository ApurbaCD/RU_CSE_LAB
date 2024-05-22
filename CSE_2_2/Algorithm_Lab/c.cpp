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

int n,x;
 int v1[1010+1];
 vec v3;
 void clr(){
    for(int i=0;i<1010;i++){
        v1[i]=0;
    }
 } 
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    loop(i,0,1010)v3[i]=0;
    cin>>n;
    vec v;
    v.push_back(0);
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=1;i<=n;i++){
        clr();
        v1[i]++;
        int j=v[i];
        while(1){
            v1[j]++;
            if(v1[j]==2){
                v3.push_back(j);
                break;
            }
            j=v[j];
        }
    }
    loop(i,0,n-1){
        cout<<v3[i]<<endl;
    }
    
}


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}