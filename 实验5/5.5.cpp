#include<iostream>
using namespace std;
typedef long long ll;
class Point
{
    private:
        int x,y;
    public:
        Point(int x=60,int y=80){
            this->x=x;
            this->y=y;
        }
        void setPoint(int i,int j){
            this->x=60+i;
            this->y=80+j;
        }
        void display(){
            cout<<x<<' '<<y<<endl;
        }
};
int main()
{
    Point p;
    p.setPoint(1,2);
    p.display();
    return 0;
}