//STUDENT RESULT IN HUBRID INHERITENCE 
#include<iostream>
using namespace std;
int maths,phy,che,total,per;
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
class derived1 : public base1
{
    public:
    void data()
    {
        cout<<"\n MATHS :";
        cin>>maths;
        cout<<"\n PHY :";
        cin>>phy;
        cout<<"\n CHE :";
        cin>>che;
    }
};
class derived2
{
    public:
    void calculate()
    {
        total=maths+phy+che;
        per=total/3;
    }
};
class derived3 : public derived1,public derived2
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
    derived3 obj;
    obj.enter();
    obj.data();
    obj.calculate();
    obj.show();
}
