#include<iostream>
using namespace std;
int main()
{
    int t=4;
    float x;
    while(cin>>x)
    {
        double t;
        if(x>0&&x<1)t=(3-2*x);
        else if(x>=1&&x<5) t=(1+1/(2*x));
        else if(x>=5&&x<10)t=x*x;
        else {cout<<"Wrong input";}
        cout<<t;
    }
}