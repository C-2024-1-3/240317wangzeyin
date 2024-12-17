//student.h                (这是头文件，在此文件中进行类的声明)
#include<string>
class Student              //类声明
{
    public:                   //公用成员函数原型声明
        void display();
        void set_value(int a,std::string b,char c){
            num=a;
            name=b;
            sex=c;
        }
    private:
        int num;
        std::string name;
        char sex;
};
