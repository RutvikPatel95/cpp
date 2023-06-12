// ACCESS SPECIFIRE
/*
claas base
{
    public:
    int x;
    protected:
    int y;
    privete:
    int z;
};
class public dervied :public base
{
    x is public;
    y is protected;
    z is not accessible from public derived;
}
class protected dervied :potected base
{
    x is protected;
    y is protected;
    z is not accessible from protected derived;
}
class privete dervied :privete base
{
    x is privete;
    y is privete;
    z is not accessible from privete derived;
}
*/
#include<iostream>
using namespace std;
class base
{
    private:
    int pvt=1;
    protected:
    int prot=2;
    public:
    int pub=3;
    int getpvt()
    {
        return pvt;
    }
};
class derived :public base
{
    public:
    int getprot()
    {
        return prot;
    }
    int getpublic()
    {
        return pub;
    }
};
int main()
{
    derived obj1;
    cout<<"\n PROTECTED = "<<obj1.getprot();
    cout<<"\n PUBLIC = "<<obj1.getpublic();
    cout<<"\n PUBLIC = "<<obj1.pub;
    return 0;
}