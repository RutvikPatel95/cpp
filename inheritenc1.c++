// SINGLE INHERITENC
#include<iostream>
using namespace std;
class base 
{
    public:
    base()
    {
        cout<<"\n BASE CLASS CONSTRUCOR";
    }
    ~base()
    {
        cout<<"\n BASE CLASS DENSTRUCOR";
    }
};
class derived : public base
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