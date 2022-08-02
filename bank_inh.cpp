#include<iostream>
using namespace std;
class Bank
{
    protected:
    int Acnumber,Balance,SVdeposite,SVwithdraw,SVshowbalance;
    public:
    void Set_Acnumber(int num)
    {
        Acnumber=num;
    }
    int get_Acnumber()
    {
        return Acnumber;
    }
};
class SavingAc: public Bank
{
    public:
    void SvAcno()
    {
        cout<<"\n Saving Account number"<<Acnumber;
    }
    void Svdeposite(int amt)
    {
         Balance += amt;
    }
     void Svwithdraw(int amt)
    {
         Balance -= amt;
    }
    int Svbalance()
    {
          return Balance;
    }
};
int main()
{
    SavingAc a;
    a.Set_Acnumber(5002000);
    a.SvAcno();
     int i, n, d, w, sb = 2500;
    do
    {
        cout << "\nYour Current Balance is " << sb << "\n";
        cout << "\nEnter the option from the following : \n1-Deposit\n2-Withdraw \n9-Show_balance \n0-Exit \n Option : ";
        cin >> n;
        if (n == 0)
        {
            break;
        }
        switch (n)
        {
        case 1:
            cout << "\n Enter deposit amount :";
            cin >> d;
            sb += d;
            break;
        case 2:
            cout << "\n Enter Withdraw amount : ";
            cin >> w;
            sb -= w;
            break;
        case 9:
            cout << "\n Your Revised balance is  " << sb;
            break;
        default:
            cout << "\n Wrong Choice ";
            break;
        }
    }while (n <= 50);
}
