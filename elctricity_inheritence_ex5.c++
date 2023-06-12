// electricity bill in hierarchical inheritence 
#include<iostream>
using namespace std;
int unit,bill;
char name[10];
class base
{
    public:
    void set()
    {
        cout<<"\n NAME :";
        cin>>name;
    }
};
class derived1 :public base
{
    public:
    void enter()
    {
        cout<<"\n UNIT :";
        cin>>unit;
    }
};
class derived2 :public base 
{
    public:
    void calculate()
    {
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
    derived1 obj;
    derived2 obj1;
    obj.set();
    obj.enter();
    obj1.calculate();
    obj1.show();
}