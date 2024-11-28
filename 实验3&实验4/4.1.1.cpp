#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    vector<int> a;
    for(int i=1;i<=10;i++){
        int x;cin>>x;
        if(s.find(x)==s.end()){
            s.insert(x);
            a.push_back(x);
            cout<<x<<' ';
        }
    }
}