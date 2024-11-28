#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<char,int> m;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z') m[s[i]]++;
        if(s[i]>='A'&&s[i]<='Z') m[s[i]+'a'-'A']++;
    }
    for(auto p:m) cout<<p.first<<' '<<p.second<<endl;
}