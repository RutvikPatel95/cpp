// HYBRIDE INHERITENCE 
#include<iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"\n BASE 1 CLASS CONSTUCTOR "; 
    } 
    ~base1()
    {
        cout<<"\n BASE 1 CLASS DESTUCTOR "; 
    }  
};
class derived1 :public base1
{
    public:
    derived1()
    {
        cout<<"\n DERIVED 1 CLASS CONSTUCTOR ";
    }
    ~derived1()
    {
        cout<<"\n DERIVED 1 CLASS DESTUCTOR ";
    }
};
class derived2
{
    public:
    derived2()
    {
        cout<<"\n DERIVED 2 CLASS CONSTUCTOR ";
    }
    ~derived2()
    {
        cout<<"\n DERIVED 2 CLASS DESTUCTOR ";
    }
};
class derived3 :public derived1,public derived2
{
    public:
    derived3()
    {
        cout<<"\n DERIVED 3 CLASS CONSTUCTOR ";
    }
    ~derived3()
    {
        cout<<"\n DERIVED 3 CLASS DESTUCTOR ";
    }
    
};
int main()
{
    derived3 obj;
}