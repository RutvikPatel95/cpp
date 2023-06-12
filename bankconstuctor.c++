#include<iostream>
using namespace std;
class saving
{
    int balance=1000;
    public:
    void deposit(int n)
    {
        balance=balance+n;
        cout<<"\n DEPOSIT AMOUNT IS :"<<n;
       // cout<<"\n ACCOUNT BALANCE :"<<balance;
    }
    void withdraw(int m)
    {
        if(balance>m)
        {
            cout<<"\n INFLUENCE BALANCE ";
        }
        else
        {
            balance=balance-m;
            cout<<"\n WITHDROW AMOUNT IS :"<<m;
        }
    }
    void show()
    {
        cout<<"\n TOTA ACCOUNT BALANCE :"<<balance;
    }
};
int main()
{
   saving obj;
   int ch,a;
   while(ch!=0)
   {
        cout<<"\n 1.DEPOSIT AMOUNT IS";
        cout<<"\n 2.WITHDRAW AMOUNT IS";
        cout<<"\n 3.ACCOUNT BALANCE ";
        cout<<"\n ENTER YOUR CHOICE :";
        cin>>ch;

        switch(ch)
        {
            case 1:
             cout<<"\n DEPOSIT ANOUNT ";
             cin>>a;
             obj.deposit(a);
            case 2:
             cout<<"\n WITHDRAW AMOUNT ";
             cin>>a;
            obj.withdraw(a);
            case 3:
            obj.show();
            break;
            default:
            cout<<"\n WRONG CHOICE.....";
            break;
        }
   }

}