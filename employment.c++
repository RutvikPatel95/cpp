//EMPLOY MENAGEMENT 
#include<iostream>
using namespace std;
class salary
{
    char name[10];
    char quli[10];
    int number,hours,salary,amt,grosssalary,hra,da,pf,monthlaysalary,netsalary,tax;
    public:
    void dat()
    {
        cout<<"\n ENTER EMPLOY NAME :";
        cin>>name;
        cout<<"\n EMPLOY QULIFICATION :";
        cin>>quli;
    }
    void calculate()
    {
        cout<<"\n ENTER HOURS :";
        cin>>hours;
        cout<<"\n SALARY AMOUNT :";
        cin>>amt;
        salary=hours*amt;
        monthlaysalary=salary*26;
    }
    void atax()
    {
        cout<<"\n monthlaysalary SALAR :"<<monthlaysalary;
        if(monthlaysalary<5000)
        {
            hra=monthlaysalary*(0.08);
            da=monthlaysalary*(0.20);
        }
        else if(monthlaysalary>5000 && monthlaysalary<=10000)
        {
            hra=monthlaysalary*(0.12);
            da=monthlaysalary*(0.30);
        }
        else if(monthlaysalary>10000 && monthlaysalary<=15000)
        {
            hra=monthlaysalary*(0.15);
            da=monthlaysalary*(0.40);
        }
        else if(monthlaysalary>=15000)
        {
            hra=monthlaysalary*(0.20);
            da=monthlaysalary*(0.50);
        }
        grosssalary=monthlaysalary+hra+da;
        cout<<"\n GROSS SALARY :"<<grosssalary;
        pf=grosssalary*(0.08);
        tax=200;
        netsalary=grosssalary-pf-tax;
    }
    void show()
    {
        cout<<"\n EMPLOY NAME :"<<name;
        cout<<"\n EMPLOY QULIFICATION :"<<quli;
        cout<<"\n WORKING HOURS :"<<hours;
        cout<<"\n WORKING AMOUNT PER HOUR :"<<amt;
        cout<<"\n 1 DAY SALARY :"<<salary;
        cout<<"\n MONTHLY SALARY :"<<monthlaysalary;
        cout<<"\n GROSS SALARY :"<<grosssalary;
        cout<<"\n PF :"<<pf;
        cout<<"\n PROFESSIONAL TAX :"<<tax;
        cout<<"\n NETSALARY :"<<netsalary;
    }

};
int main()
{
    salary obj;
    obj.dat();
    obj.calculate();
    obj.atax();
    obj.show();
}