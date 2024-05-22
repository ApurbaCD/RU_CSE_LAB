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

class Least_square{
    
    public:
      void solve() {
        cout << "Enter number of data pairs: ";
        int n;
        cin >> n;
        double x[n], y[n];
        cout << "\nEnter the Data pairs-\n" << endl;

        for(int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }

        cout << endl << endl;

        double sum_x = 0, sum_y = 0, sum_xx = 0, sum_xy = 0;

        for(int i = 0; i < n; i++) {
            sum_x += x[i];
            sum_y += y[i];

            sum_xx += (x[i]*x[i]);
            sum_xy += (x[i]*y[i]);
        }
        
        double b = (sum_xy - (sum_x*sum_y)/n) / (sum_xx - ((sum_x*sum_x) / n));
        
        double a = (sum_y / n) - b*(sum_x / n);

        cout << "a = " << a << "    " << "b = " << b << endl;

        cout << "\nEquation is : " << a << " + " << b  << "x" << endl;
    }

};


int main(){
  ios::sync_with_stdio(false);cin.tie(0);
    Least_square s=Least_square();
    s.solve();
 
}