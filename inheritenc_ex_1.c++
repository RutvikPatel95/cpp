// STUDENT RESULT SIMPLE INHERITENCE
#include<iostream>
using namespace std;
class marks
{
    public:
    int maths,phy,che,total,per;
    char name[10];
    void set()
    {
        cout<<"\n NAME :";
        cin>>name;
        cout<<"\n MATHS :";
        cin>>maths;
        cout<<"\n PHY :";
        cin>>phy;
        cout<<"\n CHE :";
        cin>>che;
    }
};
class result :public marks
{
    public:
    void calculate()
    {
        total=maths+phy+che;
        per=total/3;
    }
    void show()
    {
        cout<<"\n-----------------------------";
        cout<<"\n NAME :"<<name;
        cout<<"\n-----------------------------";
        cout<<"\n MATHS :"<<maths;
        cout<<"\n PHT :"<<phy;
        cout<<"\n CHE :"<<che;
        cout<<"\n-----------------------------";
        cout<<"\n TOTAL :"<<total;
        cout<<"\n PER :"<<per;
        cout<<"\n-----------------------------";
    }
};
int main()
{
    result obj;
    obj.set();
    obj.calculate();
    obj.show();
}