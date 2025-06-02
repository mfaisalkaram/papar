#include<iostream>
using namespace std;
class vehicle{
    public:
    int vehicle_no,max_speed;
       vehicle(int vehicle_no,int max_speed)
    {
        this->vehicle_no=vehicle_no;
        this->max_speed=max_speed;
    }
    virtual int display()=0;
};
class car:public vehicle{
    public:
    string color;
    int mileage;
    car(int vehicle_no,int max_speed,string c,int m):vehicle(vehicle_no,max_speed)
    {
    
        this->vehicle_no=vehicle_no;
        this->max_speed=max_speed;
            color=c;
        mileage=m;
    }
    int display()
    {
        cout<<"the car number:"<<vehicle_no<<endl;
        cout<<"the car speed:"<<max_speed<<endl;
    }
};
class bike:public vehicle{
    public:
    string color;
    int mileage;
       bike(int vehicle_no,int max_speed,string c,int m):vehicle(vehicle_no,max_speed)
    {
        color=c;
        mileage=m;
    }
    int display()
    {
        cout<<"the bike number:"<<vehicle_no<<endl;
        cout<<"the bike speed:"<<max_speed<<endl;
    }
};
int main()
{
    car c1(234,120,"red",20);
    bike b1(432,100,"blue",10);
    c1.display();
    b1.display();
    return 0;
}
