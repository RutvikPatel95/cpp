//DESTRUCTOR 
#include<iostream>
using namespace std;
class test
{
    int cnt;
    public:
    test()// default constructor 
    {
        cnt=100;
        cout<<"\n DEFAULT CONSTRUCTOR CALLESD..."<<cnt;
    }
    test(int n)//paramiterzied constructor 
    {
        cnt=n;
        cout<<"\n PARAMITERIZED CONSTRUCTOR CALLED..."<<cnt;
    }
    ~test() // (~)->TIELD SIGN DESTRUCTOR 
    {
        cout<<"\n DESTRUCTOR CALLED ..."<<cnt;
    }
};
int main()
{
    test obj1,obj2(25),obj3(50),obj4(75);
}