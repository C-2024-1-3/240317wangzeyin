#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
int u,v;
vector<int> c;
void merge(vector<int>& a,vector<int>& b)
{
    c.resize(u+v);
    int i=0,j=0,k=0;
    while(i<u&&j<v){
        if(a[i]>b[j]) c[k++]=b[j++];
        else c[k++]=a[i++];
    }
    while(j<v){
        c[k++]=b[j++];
    }
    while(i<u){
        c[k++]=a[i++];
    }
}
int main()
{
    cout<<"Enter list1:";
    cin>>u;vector<int> a(u);
    for(int i=0;i<u;) cin>>a[i++];
    cout<<"Enter list2:";
    cin>>v;vector<int> b(v);
    for(int i=0;i<v;)cin>>b[i++];
    merge(a,b);
    cout<<"The merged list is: ";
    for(auto p:c) cout<<p<<' ';
}