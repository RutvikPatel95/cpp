//ARRAY OF OBJECT 
//STUDENT RESULT
#include<iostream>
using namespace std;
class result
{
    int maths,phy,che,total,per;
    public:
    void setvalue()
    {
        cout<<"\n MATHS :";
        cin>>maths;
        cout<<"\n PHY :";
        cin>>phy;
        cout<<"\n CHE :";
        cin>>che;
    }
    void getvalu()
    {
        total=maths+phy+che;
        cout<<"\n TOTAL :"<<total;
        per=total/3;
        cout<<"\n PER :"<<per;
    }
};
int main()
{
    result obj1[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"\n STUDENT NO :"<<i;
        obj1[i].setvalue();
    }
    for(i=0;i<5;i++)
    {
        cout<<"\n STUDENT NO :"<<i;
        obj1[i].getvalu();
    }
}