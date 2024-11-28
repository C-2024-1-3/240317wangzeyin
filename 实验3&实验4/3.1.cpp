#include<iostream>
typedef long long ll;
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
ll lcm(ll& a,ll& b)
{
    return a*b/gcd(a,b);
}
int main()
{
    ll a,b;cin>>a>>b;
    cout<<gcd(a,b)<<endl<<lcm(a,b)<<endl;
}