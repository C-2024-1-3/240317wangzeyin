#include<iostream>
using namespace std;
const int n=10;
double a[10];
int main()
{
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    for(int j=0;j<=n-1-i;j++)
    {if(a[j]>a[j+1]) swap(a[j],a[j+1]);}
    for(int i=0;i<10;i++) cout<<a[i]<<' ';
}