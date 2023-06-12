#include<iostream>
using namespace std;
class bank
{
    int accno,amt,bal=0,a,total=0;
    public:
    void setvalue()
    {
        cout<<"\n ENTER YOUR ACCOUNT NUMBER :";
        cin>>accno;
    }
    void see()
    {
        cout<<"\n ACCOUNT NO:"<<accno;
        cout<<"\n BALANCE "<<bal;
        cout<<"\n TOTAL TRAN.."<<total;
    }
    void deposit()
    {
        cout<<"\n DEPOSIT AMOUNT :";
        cin>>amt;
        bal=bal+amt;
        total++;
    }
    void withdrw()
    {
        cout<<"\n WITHDRAW AMOUNT :";
        cin>>a;
        if(a<=bal)
        {
            bal=bal-a;
            cout<<"\n BALANCE IS :"<<bal;
        }
        else
        {
            cout<<"\n INVAILD BALANCE ......";
        }
    }
};
int main()
{
    int c;
    bank obj;
    while(c!=0)
    {
        cout<<"\n 1.DETAILS ";
        cout<<"\n 2.BALANCE ";
        cout<<"\n 3.DEPOSIT AMOUNT ";
        cout<<"\n 4.WITHDRW AMOUNT ";
        cout<<"\n ENETR YOUR CHOICE :";
        cin>>c;
        switch(c)
        {
            case 1:
            obj.setvalue();
            break;
            case 2:
            obj.see();
            break;
            case 3:
            obj.deposit();
            break;
            case 4:
            obj.withdrw();
            break;
            default:
            cout<<"\n INVAILD CHOICE ";
            break;
        }
    }
}