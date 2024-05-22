#include<bits/stdc++.h>
using namespace std;
#define ll                long long int  
#define doub               double
#define ull               unsigned long long int  
//#define vec             vector<doub>
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
doub x;
doub fun(doub x){
    doub k=(x*x*x)-(4*x)-9;
    //doub k=(x*x*x)-(2*x)-5;
    //doub k=x*x+4*x-5;
    return k;
}
int range(){
    int r=(sqrt((0/1)*(0*1))-(2*((-4)*1)))+1;
    return r;
}

pair<doub,doub> interval(){
    doub t=1000;
    int  r=range();
    doub s=-1,e=-1,ne;
    while(t--){
    doub x=(rand()%(r+r+1))-r;doub y=(rand()%(r+r+1))-r;
    long long  tmp2 = fun(x);
    long long  tmp1 = fun(y);
    if(tmp1*tmp2<0.0){
        //cout<<"L"<<tmp1<<" "<<tmp2<<endl;
        if(fun(x)<0){
            s=x;
            e=y;
            // cout<<tmp1<<"m "<<tmp2<<endl;
            // cout<<tmp1*tmp2<<"L:";
            break;
        }
        else{
            s=y;
            e=x;
            // cout<<tmp1<<" m"<<tmp2<<endl;
            // cout<<tmp1*tmp2<<"L:";
            break;
        }
    }
    else if(tmp1==0){
        cout<<"ans"<<y<<endl;break;
    }
    else if(tmp2==0){
       cout<<"ans"<<x<<endl;break;
    }
    }
    pair<doub,doub>p={s,e};
    
    return p;

}


void ans(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    double a,b,c,tmp=1;
    auto x = interval();
    if(x.first!=-1){
       a=x.first;
       b=x.second;
    }
    //int t=16;
    cout<<a<<" "<<b<<endl;
    double ef=0.0001;
    while((b-a)/(2.0)>=ef){
        //while(t--){
       c=(a+b)/2;
       tmp = fun(c);
       cout<<tmp<<endl;
       if(tmp<0){
        a=c;
       }
       else if(tmp>0){
        b=c;
       }
       else{
        break;
       }
       

    }
    cout<<"ANS== "<<c<<endl;
    //cout<<x.first<<" "<<x.second<<endl;;
    cout<<fun(c)<<endl;

}
int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    doub t=1;
    //cin>>t;
    while(t--){
        ans();
    }
}