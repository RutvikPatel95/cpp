// OPERETER OVERLODING USING FRIEND FUNCTION
#include<iostream>
using namespace std;
class loc
{
    int longtitude,latitude;
    public:
    loc(){}
    loc(int lg,int lt)
    {
        longtitude=lg;
        latitude=lt;
    }
    void show();
    friend loc operator+(loc,loc);
    friend loc operator-(loc,loc);
    friend loc operator*(loc,loc);
    friend loc operator/(loc,loc);
};
void loc ::show()
{
     cout<<"\n LONGTITUDE :"<<longtitude;
      cout<<"\n LATITUDE :"<<latitude<<"\n";
}
loc operator+(loc op1,loc op2)
{
    loc temp;   1
    temp.longtitude=op1.longtitude+op2.longtitude;
    temp.latitude=op1.latitude+op2.latitude;
    return temp;
}
loc operator-(loc op1,loc op2)
{
    loc temp;
    temp.longtitude=op1.longtitude-op2.longtitude;
    temp.latitude=op1.latitude-op2.latitude;
    return temp;
}
loc operator*(loc op1,loc op2)
{
    loc temp;
    temp.longtitude=op1.longtitude*op2.longtitude;
    temp.latitude=op1.latitude*op2.latitude;
    return temp;
}
loc operator/(loc op1,loc op2)
{
    loc temp;
    temp.longtitude=op1.longtitude/op2.longtitude;
    temp.latitude=op1.latitude/op2.latitude;
    return temp;
}
int main()
{
    loc obj1(20,10),obj2(50,40),obj3,obj4,obj5,obj6;
    obj1.show();
    obj2.show();
    obj3=obj1+obj2;
    obj3.show();
    obj4=obj1-obj2;
    obj4.show();
    obj5=obj1*obj2;
    obj5.show();
    obj6=obj1/obj2;
    obj6.show();
}