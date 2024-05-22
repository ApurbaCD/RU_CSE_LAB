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
#define tol 0.1
#define iteration 100
const ll siz=2e5+7;
const ll INF=__LONG_LONG_MAX__;



class scant{
    private:
    double x0=0,x1=0,x2=0;
    int it=0;
    
    double function(double x){
        return (x*x*exp(-(x/2)) - 1);
    }
    double cal(double a, double b){
        return (a*function(b)-b*function(a))/(function(b)-function(a));
    }

    public:
    void solve (){
        srand(time(0));
        cout<<"K";
        while(1){
            x0=-9+rand()%10;
            x1=rand()%10;
            // x0=-9+random()%10;
            // x1=random()%10;
            if(function(x0)*function(x1)<0.0)break;
            cout<<"L";
        }   

        while(1){
            cout << "\nx0 = " << x0 << "   x1 = " << x1 << "   root = " << x2 << "    Iteration : "<<it++<<endl;

            x2=cal(x0,x1);
            if(abs(x2-x1)<tol){
                break;
            }
            if(function(x2)==0.0){
                break;
            }
            if(it>iteration)break;
            x0=x1;
            x1=x2;   
        }
        cout << "\n\nThe root is : " << x2 << endl;
        
    }
};


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    scant snd = scant();
    snd.solve();
}