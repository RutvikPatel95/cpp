//Template Overloading
#include<iostream>
using namespace std;
template <class T>
void display(T t1)
{
    cout<<"Dsplaying Template : "
        <<t1<<"\n";
}
template <class T1, class T2>
void display(T1 t1, T2 t2)
{
    cout<<"Displating Template : "
        <<t1<<"\t"
        <<t2<<"\n";
}
void display(int t1)
{
    cout<<"Explicitly Display : "
        <<t1<<"\n";
}
int main()
{
    display(200);
    display(12.40);
    display("G");
    display("G",1.25);
    return 0;
}