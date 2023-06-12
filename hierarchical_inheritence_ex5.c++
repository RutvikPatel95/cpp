//STUDENT RESULT IN HIERARCHICAL INHERITENCE 
#include<iostream>
using namespace std;
int maths,phy,che,total,per;
char name[10];
class base
{
    public:
    void enter()
    {
        cout<<"\n ENTER NAME :";
        cin>>name;
    }
};
class derived1 : public base
{
    public:
    void calculate()
    {
        cout<<"\n MATHS :";
        cin>>maths;
        cout<<"\n PHY :";
        cin>>phy;
        cout<<"\n CHE :";
        cin>>che;
        total=maths+phy+che;
        per=total/3;
    }
};
class derived2 : public base
{
    public:
    void show()
    {
        cout<<"\n-----------------------------";
        cout<<"\n NAME "<<name;
        cout<<"\n-----------------------------";
        cout<<"\n MATHS "<<maths;
        cout<<"\n PHY  "<<phy;
        cout<<"\n CHE "<<che;
        cout<<"\n-----------------------------";
        cout<<"\n TOTAL "<<total;
        cout<<"\n PER "<<per;
        cout<<"\n-----------------------------";
    }
};
int main()
{
    derived1 obj1;
    derived2 obj2;
    obj1.enter();
    obj1.calculate();
    obj2.show();
}
