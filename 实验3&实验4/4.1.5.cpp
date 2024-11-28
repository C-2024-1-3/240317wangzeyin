#include<bits/stdc++.h>
using namespace std;
void getNext(string s,int* next)
{
	int j=0;
	next[0]=0;
	for (int i=1;i<s.size();i++)
	{
		while(j>0&&s[i]!=s[j]) {j=next[j - 1];}
		if(s[i]==s[j]) {next[i]=j+1;j++;}
		else next[i]=0;
	}
}
void KMP(string s1,string s2,int* next)
{
	getNext(s2,next);
	int j=0;
	for(int i = 0;i<s1.size();i++)
	{
		if(s1[i]==s2[j]) {j++;}
		else {
			while (j>0&&s1[i]!=s2[j]) {j=next[j - 1];}
			if(s1[i]==s2[j]) j++;
		}
		if (j==s2.size()) {cout<<i-s2.size()+2<<endl;j=next[j - 1];return;}
	}
	cout<<-1;
}
int main()
{
	string s1, s2;
	getline(cin,s2);
	getline(cin,s1);
	int *next=new int[1000005];
	KMP(s1,s2,next);
	delete []next;
}