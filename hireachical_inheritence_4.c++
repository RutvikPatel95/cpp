// HIERARCHICAL INHERITENCE 
#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"\n BASE CLASS CONSTUCTOR ";
    }
    ~base()
    {
        cout<<"\n BASE CLASS DESTUCTOR ";
    }
};
class derived1 :public base
{
    public:
    derived1()
    {
        cout<<"\n DERIVED1 CLASS CONSTRUCTOR";
    }
    ~derived1()
    {
        cout<<"\n DERIVED1 CLASS DESTUCTOR";
    }
};
class derived2 :public base 
{
    public:
    derived2()
    {
        cout<<"\n DERIVED2 CLASS CONSTRUCTOR";
    }
    ~derived2()
    {
        cout<<"\n DERIVED2 CLASS DESTUCTOR";
    }
};
int main()
{
    derived1 obj;
    derived2 obj1;
}