// electricity bill in multiple inheritence 
#include<iostream>
using namespace std;
class base
{
    public:
    char name[10];
    void set()
    {
        cout<<"\n NAME :";
        cin>>name;
    }
};
class base1
{
    public:
    int unit,bill;
    void calculate()
    {
        cout<<"\n UNIT :";
        cin>>unit;

        if (unit<=100)
        {
            bill=bill*0.6+50;
        }
        else if (unit>100 && unit<=300)
        {
           bill=100*0.6+(unit-100)*0.8+50;
        }
        else if (unit>300)
        {
            bill=100*0.6+200*0.8+(unit-300)*0.9+50;
        }
        if (bill>=300)
        {
            bill=bill*1.15;
        }
    }
};
class derived : public base,public base1
{
    public:
    void show()
    {
        cout<<"\n----------------------";
        cout<<"\n NAME :"<<name;
        cout<<"\n----------------------";
        cout<<"\n UNIT :"<<unit;
        cout<<"\n BILL :"<<bill;
        cout<<"\n----------------------";
    }
};
int main()
{
    derived obj;
    obj.set();
    obj.calculate();
    obj.show();
}