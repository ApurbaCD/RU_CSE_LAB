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
int num[1010];
void clr(){
    loop(i,0,1009){
        num[i]=0;
    }
}
void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,x;
    cin>>n;
    vec v,f;
    loop(i,0,n-1){
        cin>>x;v.push_back(x);
    }
    for(int i=0;i<n;i++){
        clr();
        num[i+1]++;
        int tmp,j=i+1;
        while(1){
        tmp=v[j-1];
        
        num[tmp]++;
        //cout<<tmp<<" "<<num[tmp]<<"uiu "<<j<<endl;
        if(num[tmp]==2){f.push_back(tmp);break;}
        j=tmp;
       // cout<<"L "<<j<<endl;
        }
    }
    loop(i,0,n-1){
        cout<<f[i]<<" ";
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