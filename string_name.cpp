#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"\nplease enter your name : ";
    cin>>str;
    cout<<"\n str : "<<str;
    getline(cin,str);

    cout<<"\n Hello,"<<str<<"welcome to skill qode !\n";
}
