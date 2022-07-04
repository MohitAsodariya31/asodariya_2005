#include<iostream>
using namespace std;
class bank
{
    int accno,balance;
    string myname;
    public:
    static int count;
    bank(int accno,int balance,string myname)
    {
        this->accno=accno;
        this->balance=balance;
        this->myname=myname;
        count++;
    }
    void getdata()
    {
        cout<<"\n"<<myname<<"-"<<accno<<"-"<<balance;
    }
};
int bank::count;
int main()
{
    bank a(101,1500,"aryan"),m(102,1700,"meet");
    a.getdata();
    m.getdata();
    cout<<"\n account no :"<<bank::count;
    return 0;
}