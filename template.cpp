#include<iostream>
using namespace std;
template<class T>
void display(T t1)
{
    cout<<"Displaying Template:"<<t1<<"\n";
}
template<class T1, class  T2>
void display(T1 t1,T2 t2)
{
    cout<<"Displaying1 Template :"<<t1<<"\n"<<t2<<"\n";
}
//void displaying(int t1)
//{
//    cout<<"explicitly displaying:"<<t1<<"\n";
//}

int main()
{
    display(200);
    display(12.40);
    display('G');
    display('G',1.25);
    display('x',25);
    display(25,1.25);

    return 0;
}
