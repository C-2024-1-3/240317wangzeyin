#include<iostream>
using namespace std;
int main()
{
    int total=2,price=0,day=1,daily=2;
    while(total+2*daily<100)
    {
        total+=2*daily;
        daily*=2;
        day++;
    }
    cout<<0.8*total/day;
}