//STUDENT RESULT IN MULTIPLE INHERITENCE 
#include<iostream>
using namespace std;
class name
{
    public:
    char name[10];
    void enter()
    {
        cout<<"\n ENTER NAME :";
        cin>>name;
    }
};
class result
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
class derived : public name,public result
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
