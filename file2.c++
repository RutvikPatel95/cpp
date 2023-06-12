#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string srg;
    ifstream filestream("file1.text");
    if(filestream.is_open())
    {
        while(getline(filestream,srg))
        {
            cout<<"srg"<<endl;
        }
        filestream.close();
    }
    else
    {
        cout<<"\n file opening is fail";
    }
    return 0;
}