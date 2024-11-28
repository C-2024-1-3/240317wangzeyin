#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z') sum=sum*16+s[i]-'A'+10;
        else sum=sum*16+s[i]-'0';
    }
    cout<<sum;
}