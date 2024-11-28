#include<iostream>
using namespace std;
double celsius_to_fah(double cel);
double fahrenheit_to_cels(double fah);
void solve()
{
    cout<<"Celsius Fahrenheit | Fahreheit Celsius"<<endl;
    for(double i=40,j=120;i>=31,j>=30;i--,j-=10)
    {
        cout<<i<<' '<<celsius_to_fah(i)<<" | "<<j<<' '<<fahrenheit_to_cels(j)<<endl;
    }
}