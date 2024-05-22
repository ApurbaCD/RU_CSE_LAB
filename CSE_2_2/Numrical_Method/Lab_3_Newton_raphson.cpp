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


# define re 0.001
# define  iteration 1000
class NewtonRaphson{
    private:
    int it=0;
    double x,x1;
    double function(double x){
        return (x*x*x + x*x - 1);
    }
    double function2(double x){
        return (3*x*x+2*x);
    }

    public:

    void solve (){

        while(1){
        x=random()%10;
        if(function2(x))
            break;
        }

        while(1){
            x1=x-(function(x)/function2(x));

            if((abs(x1-x)/x1)<re){
                break;
            }
        
            cout<<"slove "<<setw(10)<<x1<<" "<<setw(10)<<x<<"  iteration  "<<it++;
            //cout << "Iteration-" << ++it << ": x = "<< setw(10) << x1 <<"    and f(x) = " << setw(10) << function(x1) << endl;

            endline;
            if(function(x1)==0)break;
            if(it>iteration){
                cout << "Non Convergent! means divergents " << endl;
                break;
            }
            swap(x1,x);
            if(function2(x1)==0)x1++;
        }
        cout << "\n\nThe value of root is: " << x1 << endl;

    }
    
    
};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
  NewtonRaphson n = NewtonRaphson();
  n.solve();


}