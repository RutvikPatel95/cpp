//GETLINE
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Please Enter  Your Name : \n";

    getline(cin,str);
    cout<<"Hello "<<str
        <<" Welcome To SkillQode !\n";
    return 1;
}