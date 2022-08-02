// ofstream: stream class to write on files
// ifstream: stream class to read from files
// fstream: stream class to both read an d write from / to files.

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"\nwelcome to skillqode";
        filestream<<"\nwe started new tab";
        filestream<<"\nwe started new branch";
        filestream.close();
    }
    else
    {
        cout<<"file opening is fail :";
        return 0;
    }
}
