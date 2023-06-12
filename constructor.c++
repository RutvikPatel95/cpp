#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"\n DEFALT CONSTRUCTOR CALLED...";
    }
    test(int n)
    {
        cout<<"\n PARAMETERIZES CONSTRUCTOR CALLED.. "<<n;
    }
    test(char y)
    {
        cout<<"\n PARAMETERIZED CONSTRUCTOR CALLED.."<<y;
    }
};
int main()
{
    test obj1,obj2(10),obj3(20),obj4(30),obj('J');
}