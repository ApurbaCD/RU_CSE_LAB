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
#define tolerance 0.0001

class Bisection{
    private:

    double a=0,b=0;

    double function(double x){
        return x*x*x + x*x + x + 7;
    }

    public:

    double solve(){

        while(1){
            a=-9+random()%10;
            b=random()%10;
            if(function(a)*function(b)<0)break;
        }
        if(a>b)swap(a,b);
        cout<<a<<" "<<b<<endl;
        double root, pre_root=(a+b)/2,iteration=0;
        root=pre_root;
        cout<<"root = "<<root<<"\n";
        while(1){
            double f1=function(a);
            double f2=function(root);
            if(f1*f2<0)
                b=root;
            else if(f1*f2>0)
                a=root;
            else
                break;
            pre_root=root;
            root=(a+b)/2;
            cout<<"root = "<<root<<"   iteration "<<iteration<<"\n";
            if((abs(root-pre_root)/root)>tolerance){break;}

        }

        return root;
    }

};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
  Bisection bi = Bisection();
  cout<<bi.solve();
}