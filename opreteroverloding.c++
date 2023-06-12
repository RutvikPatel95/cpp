// OPERATER OVERLODING 
#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;
    public:
    loc()
    {}
    loc(int lg,int lt)
    {
        longitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<<"\n LONGTITUDE :"<<longitude;
        cout<<"\n LATITUDE :"<<latitude<<"\n";
    }
    loc operator+(loc);
    loc operator-(loc);
    loc operator*(loc);
    loc operator/(loc);
};
loc loc :: operator+(loc obj2)
{
    loc temp;
    temp.longitude=longitude+obj2.longitude;
    temp.latitude=latitude+obj2.latitude;
    return temp;
}
loc loc ::operator-(loc obj2)
{
    loc temp;
    temp.longitude=longitude-obj2.longitude;
    temp.latitude=latitude-obj2.latitude;
    return temp;
}
loc loc ::operator*(loc obj2)
{
    loc temp;
    temp.longitude=longitude*obj2.longitude;
    temp.latitude=latitude*obj2.latitude;
    return temp;
}
loc loc ::operator/(loc obj2)
{
    loc temp;
    temp.longitude=longitude/obj2.longitude;
    temp.latitude=latitude/obj2.latitude;
    return temp;
}
int main()
{
    loc obj1(10,20),obj2(5,30),obj5;
    obj1.show();
    obj2.show();
    obj5=obj1+obj2;
    obj5.show();
    obj5=obj1-obj2;
    obj5.show();
    obj5=obj1*obj2;
    obj5.show();
    obj5=obj1/obj2;
    obj5.show();   
}
