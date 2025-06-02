#include<iostream>
using namespace std;
class shape{
    public:
    string name;
    virtual int area()=0;
};
class circle:public shape{
    public:
    int radius;
    circle(int r)
    {
        radius=r;
    }
    int area()
    {
        return 2*3.142*radius;
    }

};
class rectangle:public shape{
    public:
    int length,breath;
    rectangle(int l,int b){
        length=l;
        breath=b;
    }
    int area()
    {
        return length*breath;
    }
};
int main()
{
    circle c1(3);
    rectangle r1(3,4);
    cout<<"the area of circle:"<<c1.area()<<endl;
    cout<<"the area of rectangel:"<<r1.area()<<endl;
    return 0;


}