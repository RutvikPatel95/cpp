// ofstream :stream class to write on files
// ifstream :stream class to read from files
// fstream : stream class to both read and write from/to file.

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file1.tex");
    if(filestream.is_open())
    {
        filestream<<"welcome to skillqode";
        filestream<<"\nWe started new lab";
        filestream<<"\nWe started new brach";
        filestream.close();
    }
    else
    {
        cout<<"\n file opening is fail";
    }
    return 0;
}