// #include<bits/stdc++.h>
// using namespace std;
// #define ll                long long int 
// #define ull               unsigned long long int 
// //#define vec             vector<int>
// //copy from Mrinal da
// #define vec               vector<ll>
// #define vsort(v)          (v.begin(),v.end())
// #define endline           cout<<"\n"
// #define yes               cout<<"YES\n"
// #define no                cout<<"NO\n"
// #define loop(i,a,b)       for(ll i=a;i<=b;i++)
// #define loop1(i,a,b)      for(ll i=a;i>=b;i--)
// const ll siz=2e5+7;
// const ll INF=__LONG_LONG_MAX__;



// void ans(){
//     //freopen("input.txt","r",stdin);
//     //freopen("output.txt","w",stdout);
//     ll a,b,a1,b1,c1;
//     cin>>a>>b;
//     a1=a;b1=b;
//     if(b>a)swap(a,b);
//     if(b==1){
//         cout<<1<<"\n"<<a1<<" "<<b1<<"\n";
//         return;
//     }
//     if(a%b!=0){
//         cout<<1<<"\n"<<a1<<" "<<b1<<"\n";
//         return;
//     }
//     a=a1;b=b1;
//     if(a>b){
//        while(a%b==0){
//            a--;
//        }
//     }
//     else{
//         while(b%a==0){
//            b--;
//        }
//     }
//     cout<<2;
//     endline;
//     cout<<a<<" "<<b;
//     endline;
//     cout<<a1<<" "<<b1;
//     endline;

// }


// int main(){
//   ios::sync_with_stdio(false);cin.tie(0);
//     int t=1;
//     cin>>t;
//     while(t--){
//         ans();
//     }
// }
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
    int a,b;
    cin>>a>>b;
    cout<<2;
    endline;
    cout<<1<<" "<<b-1;
    endline;
    cout<<a<<" "<<b;
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