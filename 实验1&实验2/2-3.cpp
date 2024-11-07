#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"input a,b,c:";
    cin>>a>>b>>c;
    cout<<"The perimeter is:"<<a+b+c<<endl;
    if((a==b||a==c||b==c)&&(a+b>c&&a+c>b&&b+c>a)) cout<<"YES";
    else cout<<"No";
}