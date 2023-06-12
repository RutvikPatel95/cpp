// FRIEND FUNCTION 
#include<iostream>
using namespace std;
class myclass 
{
    int a,b;
    public:
    friend int sum(myclass);
    friend int substration(myclass);
    friend int multiplication(myclass);
    friend int divided(myclass);
    void setdata(int,int);
};
void myclass ::setdata(int a,int b)
{
    this->a=a;
    this->b=b;
}
int sum(myclass x)
{
    return x.a+x.b;
}
int substration(myclass j)
{
    return j.a-j.b;
}
int multiplication(myclass k)
{
    return k.a*k.b;
}
int divided(myclass l)
{
    return l.a/l.b;
}
int main()
{
    myclass n;
    n.setdata(5,4);
    cout<<"\n SUM :"<<sum(n);
    cout<<"\n SUBSTRATION :"<<substration(n);
    cout<<"\n MULTIPLICATION :"<<multiplication(n);
    cout<<"\n DIVIDED :"<<divided(n);
}