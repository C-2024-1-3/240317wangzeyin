#include<iostream>
using namespace std;
bool check(double i,int j)
{
    if(j<10) return check(i/2-1,j+1);
    else if(i>=1) return true;
    else return false;  
}
int main()
{
    int l=1,r=1000000000,mid;
    while(l<r){
        mid=(l+r)/2;
        if(check(mid,0)) r=mid;
        else l=mid+1;
    }
    cout<<r;
}