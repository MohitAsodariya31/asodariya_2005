#include<iostream>
using namespace std;
int main()
{
    float celsius, fahrenheit;
    cout<<"Enter the Celsius: ";
    cin>>celsius;
    fahrenheit=(celsius * 9 / 5) + 32;
    cout<<endl<<celsius<<"\370C = "<<fahrenheit<<"\370F";
    cout<<endl;
    return 0;
}