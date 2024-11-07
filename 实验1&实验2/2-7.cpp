#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout.fill('*');
    int t=5;
    while(t--)
    {
        cout<<setw(5-t)<<'*'<<endl;
    }
}