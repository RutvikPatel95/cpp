#include<iostream>
using namespace std;
class bank 
{
    int accno,balance=0,amount;
    public:
    static int a,b,c;

    void deposit1()
    {
        cout<<"\n Enter 2000";
        cin>>amount;
        balance=balance+amount;
        a++;
    }
    void deposit2()
    {
        cout<<"\n Enter 500";
        cin>>amount;
        balance=balance+amount;
        b++;
    }
    void deposit3()
    {
        cout<<"\n Enter 50";
        cin>>amount;
        balance=balance+amount;
        c++;
    }
    void show()
    {
        cout<<"\n account balance is "<<balance;
    }
    static int geta()
    {
        return a;
    }
    static int getb()
    {
        return b;
    }
    static int getc()
    {
        return c;
    }
};
int bank ::a;
int bank ::b;
int bank ::c;
int main()
{
    bank obj;
    int a;
    while(a!=0)
    {
        cout<<"\n 1 deposit amount for 2000\n";
        cout<<"\n 2 deposit amount for 500\n";
        cout<<"\n 3 deposit amount for 50\n";
        cout<<"\n 4.account balance";
        cout<<"\n 5.Total ";
        cout<<"\n your choice";
        cin>>a;

        switch(a)
        {
            case 1:
            obj.deposit1();
            break;
            case 2:
            obj.deposit2();
            break;
            case 3:
            obj.deposit3();
            break;
            case 4:
            obj.show();
            break;
            case 5:
            cout<<"\n count 2000 :----"<<bank::geta();
            cout<<"\n count 500 :-----"<<bank::getb();
            cout<<"\n count 50 :-----"<<bank::getc();
        }

    }
}