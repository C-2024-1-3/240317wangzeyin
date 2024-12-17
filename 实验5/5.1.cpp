#include<iostream>
using namespace std;
class Time             // 定义Time类
{
    private:              // 数据成员为公用的
        int hour;
        int minute;
        int sec ;
    public:
        Time(int a,int b,int c){
            hour=a,minute=b,sec=c;
        }
        void show(){
            cout<<hour<<": "<<minute<<": "<<sec<<endl ;
        }
};
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    Time t1(a,b,c);           //定义t1为Time类对象
    t1.show();
    return 0;
}
