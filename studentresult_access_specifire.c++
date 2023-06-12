//  STUDENT RESULT 
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int r1;
    char nm[10];
    public:
    void read();
    void display();
};
class marks : public student
{
    protected:
    int s1,s2,s3;
    public:
    void getmarks();
    void putmarks();
};
class result :public marks
{
    int t;
    float p;
    char div[10];

    public:
    void process();
    void printresult();
};
void student::read()
{
    cout<<"\n ENTER ROLL NO :";
    cin>>r1;
    cout<<"\n ENTER NAME :";
    cin>>nm;
}
void student::display()
{
    cout<<"\n ROLL NO :"<<r1;
    cout<<"\n NAME :"<<nm;
}
void marks::getmarks()
{
    cout<<"\n ENTER MARKS SUBJECT 1:";
    cin>>s1;
    cout<<"\n ENTER MARKS SUBJECT 2:";
    cin>>s2;
    cout<<"\n ENTER MARKS SUBJECT 3:";
    cin>>s3;
}
void marks::putmarks()
{
    cout<<"\n SUBJECT 1 :"<<s1;
    cout<<"\n SUBJECT 2 :"<<s2;
    cout<<"\n SUBJECT 3 :"<<s3;
}
void result ::process()
{
    t=s1+s2+s3;
    p=t/3.0;
    p>=60 ?strcpy(div,"first"):p>=50?strcpy(div,"SECOND"):strcpy(div,"THIRD");
}
void result::printresult()
{
    cout<<"\n TOTAL :"<<t;
    cout<<"\n";
    cout<<"\nPERCENTEGE :--->"<<p;
    cout<<"\nDIVISION :--->"<<div;
}
int main()
{
    result x;
    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
    return 0;
}