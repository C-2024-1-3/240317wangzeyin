#include<iostream>
using namespace std;
class Rectangular{
    private:
        int length,width,height;
    public:
        Rectangular(int length,int width,int height){
            this->length=length;
            this->width=width;
            this->height=height;
        }
        void show(){
            cout<<length*width*height<<endl;
        }
};
int main(){
    int l,w,h;
    cin>>l>>w>>h;
    Rectangular a(l,w,h);
    a.show();
}