//Implicit Conversion
#include<iostream>
using namespace std;
int main()
{
    //int a,b,c;
    //a=b=c=20;
    int x=10;
    char y='A';
    x=x+y; //75
    y=x+10; //
    float z=x+1.2;
    cout<<"x = "<<x<<endl
        <<"y = "<<y<<endl
        <<"z = "<<z<<endl;
    return 0;
}