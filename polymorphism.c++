// compile time polymorphism  // function overloding
// run time polymorphism // function overridig
#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"\n BASE CLASS IS INVOKED";
    }
};
class derived :public base
{
    public:
    void display()
    {
        cout<<"\n DERIVED CLASS IS INVOKED";
    }
};
int main()
{
    base *p,b;
    derived d;
    p=&b;
    p->display();
    p=&d;
    p->display();

    // derived d;
    // d.display();
    // base b;
    // b.display();
}