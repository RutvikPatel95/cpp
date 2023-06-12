// ARRAT OF OBJECT 
#include<iostream>
using namespace std;
class sum
{
    int x;
    public:
    void setval()
    {
        cout<<"\n ENTER X :";
        cin>>x;
    }
    int getval()
    {
        return x;
    }
};
int main()
{
    sum obj1[5];
    int i;
    for(i=0;i<3;i++)
    obj1[i].setval();
    for(i=0;i<3;i++)
    {
        cout<<"\n X :"<<obj1[i].getval();
    }
}