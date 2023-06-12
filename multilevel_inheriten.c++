//MULTILEVEL INHERITENCE 
#include<iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"\n BASE 1 CLASS CONSTUCTOR";
    }
    ~base1()
    {
        cout<<"\n BASE 1 CLASS DESTUCTOR";
    }
};
class base2 : public base1
{
    public:
    base2()
    {
        cout<<"\n BASE 2 CLASS CONSTUCTOR";
    }
    ~base2()
    {
        cout<<"\n BASE 2 CLASS DESTUCTOR";
    }
};
class derived :public base2
{
    public:
    derived()
    {
        cout<<"\n DERIVED CLASS CONSTUCTOR";
    }
    ~derived()
    {
        cout<<"\n DERIVED CLASS DESTUCTOR";
    }
};
int main()
{
    derived obj;
}
