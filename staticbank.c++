/*
->BANK PROGRAM 
1.DEPOPSI TRANSION
2.WITHDRAW TRANSION
3.TOTAl TRANSION
*/
#include<iostream>
using namespace std;
class bank
{
    int accno,balance=0,amount;
    public:
    static int cnt,ant,dnt;

    void data()
    {
        cout<<"\n ACCOUNT NUMBER :";
        cin>>accno;
    }
    void deposit()
    {
        cout<<"\n DEPOSIT AMOUNT :";
        cin>>amount;
        balance=balance+amount;
        cnt++;
    }
    void withdrw()
    {
        cout<<"\n WITHDRAW AMOUNT :";
        cin>>amount;
        if(amount<=balance)
        {
            balance=balance-amount;
        }
        else
        {
            cout<<"\n NO BALANCE ";
        }
        ant++;
    }
    void show()
    {
        cout<<"\n ACCOUNT BALANCE IS :"<<balance;
    }
    static int getcnt()
    {
        return cnt;
    }
    static int getant()
    {
        return ant;
    }
    static int gettotal()
    {
        return dnt=cnt+ant;
    }
};
int bank::cnt;
int bank::ant;
int bank::dnt;
int main()
{
    bank  obj;
    int a;
    while(a!=0)
    {
        cout<<"\n 1. ACCOUNT NO ";
        cout<<"\n 2. DEPOSIT AMOUNT ";
        cout<<"\n 3. WITHDRAW AMOUNT ";
        cout<<"\n 4. ACCOUNT BALANCE ";
        cout<<"\n 5. TOTAL TRANSION ";
        cout<<"\n ENTER YOUR CHOICE :";
        cin>>a;

        switch(a)
        {
            case 1:
            obj.data();
            break;
            case 2:
            obj.deposit();
            break;
            case 3:
            obj.withdrw();
            break;
            case 4:
            obj.show();
            break;
            case 5:
            cout<<"\n------------------------------------";
            cout<<"\n DEPOPSI TRANSION :"<<bank::getcnt();
            cout<<"\n WITHDRAW TRANSION :"<<bank::getant();
            cout<<"\n TOTAl TRANSION :"<<bank::gettotal();
            cout<<"\n------------------------------------";
            break;
            default:
            cout<<"\n WRONG CHOICE.........";
            break;
        }
    }
}