// ABSTRACT CLASS
#include<iostream>
using namespace std;
class shape
{
    protected:
    int width;
    int height;

    public:
    virtual int getarea()=0; //pure virtual function(abstract)
    //fflush(stdin)
    void setwidth(int w)
    {
        width=w;
    }
    void setheight(int h)
    {
        height=h;
    }
};
class rectangle:public shape
{
    public:
    int getarea()
    {
        return(width*height);
    }
};
class traingle:public shape
{
    public:
    int getarea()
    {
        return(width*height)/2;
    }
};
int main()
{
    rectangle rect;
    traingle tri;

    rect.setwidth(5);
    rect.setheight(7);
    cout<<"total rectangle area : "<<rect.getarea()<<endl;

    tri.setwidth(5);
    tri.setheight(7);
    cout<<"total area : "<<tri.getarea()<<endl;
    return 0;
}
