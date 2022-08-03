#include<iostream>
using namespace std;
double ZeroDivision(int x,int y)
{
    if(y==0)
    {
        throw"Division by Zero!";!
    }
    return (x/y);
}
int main()
{
    int a=11;
    int b=0;
    double c=0;
    try
    {
        c=ZeroDivision(a,b);
        cout<<c<<endl;
    }
    catch(const char*message)
    {
        cerr<<message<<endl;
    }
    return 0;
   
}