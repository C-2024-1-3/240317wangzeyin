#include<iostream>
using namespace std;
typedef long long ll;
class student
{
    private:
        int id,grade;
    public:
        void set_value(){
            cin>>id>>grade;
        }
        bool operator<(student b){
            return grade<b.grade;
        }
        void show(){
            cout<<id<<endl;
        }
}s[5];
int main()
{
    for(int i=0;i<5;i++){
        s[i].set_value();
    }
    student a=s[0];
    for(int i=1;i<5;i++)
        if(a<s[i]) a=s[i];
    a.show();
    return 0;
}