#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
ll prime[10000005];
vector<ll> a;
void pre()
{
    for(int i=2;i<3005;i++){
        if(!prime[i]) a.push_back(i);
        for(int j=0;j<a.size();j++) prime[a[j]*i]=1;
    }
}
bool isPrime(int num)
{
    if(prime[num]) return false;
    else return true;
}
int main()
{
    pre();
    for(int i=0;i<20;i++){
    for(int j=0;j<9;j++) cout<<a[i*10+j]<<' ';
    cout<<a[i*10+9]<<endl;
    }
}