#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[75];
    ofstream os;
    os.open("file3.text");

    cout<<"\nWriting to a text file";
    cout<<"\nPlease enter your name:";
    cin.getline(input,100);
    os<<input;

    cout<<"\nPlease enter your contact";
    cin>>input;
    cin.ignore();
    os<<input;
    os.close();
    ifstream is;
    string line;
    is.open("file3.txt");

    cout<<"\nReading from a text file :";
    while(getline(is,line))
    {
        cout<<"\nline"<<endl;
    }
    is.close();
    return 0;
}