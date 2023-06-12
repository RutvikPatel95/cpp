//FUNCTION OVERLODING 
#include<iostream>
using namespace std;
class abc
{
    int x,y;
    public:
    void dosum()
    {
        x=0,y=0;
        cout<<"\n x+y:"<<x+y;
    }
    void dosum(int x,int y)
    {
        cout<<"\n int X+Y :"<<x+y;
    }
    void dosum(double x,double y)
    {
        cout<<"\n double x+y :"<<x+y;
    }
    void dosum(double x,double y,double z)
    {
        cout<<"\n double X+Y+Z :"<<x+y+z;
    }
};
int main()
{
    abc obj;
    obj.dosum();
    obj.dosum(10,20);
    obj.dosum(20.5,26.8);
    cout<<"\n double peramiter :";obj.dosum(10.8,20.6,9.3);
}