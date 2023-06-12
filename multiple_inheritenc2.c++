// MULTIPLE INHERITENCE
#include<iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"\n BASE 1 CLASS CONSTRUCTOR";
    }
    ~base1()
    {
        cout<<"\n BASE 1 CLASS DESTRUCTOR";
    }
};
class base2
{
    public:
    base2()
    {
        cout<<"\n BASE 2 CLASS CONSTUCTOR";
    }
    ~base2()
    {
        cout<<"\n BASE 2 CLASS DESTRUCTOR";
    }
};
class base3
{
    public:
    base3()
    {
        cout<<"\n BASE 3 CLASS CONSTUCTOR";
    }
    ~base3()
    {
        cout<<"\n BASE 3 CLASS DESTRUCTOR";
    }
};
class derived :public base1,public base2,public base3
{
    public:
    derived()
    {
        cout<<"\n DERIVED CLASS CONSTUCTOR";
    }
    ~derived()
    {
        cout<<"\n DERIVED CLASS DESTRUCTOR";
    }
};
int main()
{
    derived obj;
}
