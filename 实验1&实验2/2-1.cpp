#include<iostream>
using namespace std;
int main()
{
    char s;
    cin>>s;
    if(s>='a'&&s<='z'){cout<<char(s+'A'-'a');return 0;}
    else {cout<<int(s);}
}