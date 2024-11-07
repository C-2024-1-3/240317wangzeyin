#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double f;
	cout<<"Please input a fahrenheit:";
	cin>>f;
	cout<<"The celsius temperature is:"<<fixed<<setprecision(2)<<(5*(f-32))/9;
}