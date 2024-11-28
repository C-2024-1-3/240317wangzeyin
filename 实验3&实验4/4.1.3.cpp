#include<iostream>
using namespace std;
bool b[100];
int a[100];
int main()
{
    for(int i=1;i<=100;i++)
    {
        int j=i;
        while(j<=100)
        {
            a[j-1]++;
            j+=i;
        }
    }
    for(int i=0;i<100;i++) if(b[i]=a[i]&1) cout<<i+1<<' ';
}