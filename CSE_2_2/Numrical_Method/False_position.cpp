#include<bits/stdc++.h>
using namespace std;
class Fasi{
    private :
    double tol=0.0001;
    
    // double function(double x) {
    //     return (x*x*x + x*x - 1);
    // }

    double function(double x){
        return ((x*x*exp(-(x/2)))-1);
    }
    double falspo(double a, double b){
        return (b*function(a) - a*function(b))/(function(a)-function(b));
    }
    public:

    double root ;
    
    void solve(){
        double a,b;
        srand(int(time(0)));

        while(true){
            a=-9+rand()%10;
            b=rand()%10;
            if(function(a)*function(b)<0.00)break;
        }
        int iteration = 1;
        while(true){
            root=falspo(a,b);
            cout << "root at iteration " << iteration++ << " : " << root << endl; 
             if(function(root)==0.0)break;
             else if(function(root)>0.00) a=root;
             else b=root;
             double ep=abs((falspo(a,b)-root)/root);
             if(ep<tol)break;
        }
        cout << "The apprx. root is: " << root << endl;
    }

};
int main(){
    Fasi obj = Fasi();
    obj.solve();
}