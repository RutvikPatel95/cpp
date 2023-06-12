// SINGLE INHERITENCE
#include<iostream>
using namespace std;
class account
{
    public:
    int salary;
    void setval(int val)
    {
        salary=val;
    }
    int getval()
    {
        return salary;
    }
};
class programmer : public account
{
    int bonus;
    public:
    void raisedbonu()
    {
        salary=salary+500;
    }
};
int main(void)
{
    programmer obj;
    obj.setval(60000);
    cout<<"\n SALARY IS :"<<obj.getval();
    obj.raisedbonu();
    cout<<"\n GIVE BONUSE:"<<obj.getval();
}