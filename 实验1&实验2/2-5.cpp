#include<iostream>
using namespace std;
int main()
{
    int English=0,Space=0,Math=0,Else=0;
    char ch=getchar();
    while(ch!='\n')
    {
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z') English++;
        else if(ch>='0'&&ch<='9') Math++;
        else if(ch==' ') Space++;
        else Else++;
        ch=getchar();
    }
    cout<<English<<Space<<Math<<Else;
}