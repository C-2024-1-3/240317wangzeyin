#include<iostream>
using namespace std;
int main()
{
    double a=0,b=0;
    char ch=getchar();
    while(ch>='0'&&ch<='9')
    {
        a=a*10+ch-'0';
        ch=getchar();
    }
    char c=getchar();
    while(c>='0'&&c<='9')
    {
        b=b*10+c-'0';
        c=getchar();
    }
    switch(ch)
    {
    case '+':{cout<<a+b;break;}
    case '-':{cout<<a-b;break;}
    case '*':{cout<<a*b;break;}
    case '/':
    {
        if(b==0) cout<<"Wrong input!";
        else cout<<a/b;
        break;
    }
    case '%':
    {
        if(b==0||(int(b)!=b)||(int(a)!=a)) cout<<"Wrong input!";
        else cout<<int(a)%int(b);
        break;
    }
    }
}