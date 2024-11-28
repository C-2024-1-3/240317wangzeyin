#include<iostream>
#include<algorithm>
using namespace std;
int* a=new int[1];
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;) {cin>>a[i++];cout<<&a[i-1]<<endl;}
    int* p=a;
    sort(a,a+n);
    while(n--) cout<<*p++<<endl;
    delete []a;
}
