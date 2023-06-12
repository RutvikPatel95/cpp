#include<iostream>
using namespace std;
class bank
{
    int balance=1000,amt,b;
    public:
    bank()
    {
       // balance=n;
        cout<<"\n BALANCE IS :"<<balance;
    }
    void deposit()
    {
        int amt;
        cout<<"\n DEPOSIT AMOUNT :";
        cin>>amt;
        balance=balance+amt;
    }
    void withdrow()
    {
        cout<<"\n WITHDRAW AMOUNT :";
        cin>>b;
        if(b<=balance)
        {
            balance=balance-b;
        }
        else
        {
            cout<<"\n NO BALANCE ";
        }
    }
    void show()
    {
        cout<<"\n TOTAL BALANCE :"<<balance;
    }
};
int main()
{
    bank obj1;
    obj1.deposit();
    obj1.withdrow();
    obj1.show();
}