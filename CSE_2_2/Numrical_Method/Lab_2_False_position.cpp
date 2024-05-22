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

# define tolerance 0.0001

class False_Position{
    private:

    double a,b;
    double function(double x){
        // return x*x*x + x*x + x + 7;
          return (x*x*exp(-(x/2)) - 1);
    }


    public:
    int iter=0;
    double solve(){
        double root,pre_root;
        while(1){
            a=-9+random()%10;
            b=random()%10;
            double f1=function(a);
            double f2=function(b);
            if(f1*f2<0)break;
        }
        if(a>b)swap(a,b);
        root=pre_root=(a*(function(b))-b*(function(a)))/(function(b)-function(a));
        while(1){
           double f1=function(a);
           double f2=function(root);
           if(f1*f2<0)b=root;
           else if(f1*f2>0)a=root;
           else{
            return root;
           }
           pre_root=root;
           root=(a*(function(b))-b*(function(a)))/(function(b)-function(a));
           cout<<"root "<<root<<" pre_root  "<<pre_root<<endl;
           cout<<iter++<<endl;
           if((abs(root-pre_root))/root<tolerance)return root;

        }
    }
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
  False_Position f=False_Position();
  cout<<f.solve();
    
}