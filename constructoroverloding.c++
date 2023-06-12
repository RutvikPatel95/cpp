// CONSTRUCTOR OVERLODING
#include<iostream>
using namespace std;
class sum
{
    int x,y;
    public:
    sum()
    {
        x=0,y=0;
        cout<<"\n x + y :"<<x+y;
    }
    sum(int x,int y)
    {
        cout<<"\n int x+y :"<<x+y;
    }
    sum(double x,double y)
    {
        cout<<"\n double X+Y :"<<x+y;
    }
    sum(double x,double y,double z)
    {
        cout<<"\n double X+Y+Z :"<<x+y+z;
    }
};
int main()
{
    sum obj1,obj2(10,20),obj3(20.5,23.8),obj4(10.8,20.5,29.9);
}