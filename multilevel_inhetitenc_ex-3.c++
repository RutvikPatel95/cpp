//STUDENT RESULT IN MULTLEVEL INHERITENCE 
#include<iostream>
using namespace std;
class base1
{
    public:
    char name[10];
    void enter()
    {
        cout<<"\n ENTER NAME :";
        cin>>name;
    }
};
class base2 : public base1
{
    public:
    int maths,phy,che,total,per;
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
class derived : public base2
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
    derived obj;
    obj.enter();
    obj.calculate();
    obj.show();
}
