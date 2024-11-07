#include<iostream>
#include<cmath>
using namespace std;
double gen(double a,double b,double c)
{
    if(abs(b-c)<1e-5) return c;
    else {b=0.5*(c+abs(a)/c);return gen(a,c,b);}
}
int main()
{
    double a;
    cin>>a;
    double b=abs(a);
    double c=0.5*(b+abs(a)/b);
    double ans=a/abs(a)*gen(a,b,c);
    cout<<ans;
}