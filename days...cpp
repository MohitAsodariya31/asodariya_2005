#include <iostream>
using namespace std;
int main()
{
    int year, day, week;
    cout << "Enter days : ";
    cin >> day;

    year = day / 365;
    week = day / 7;

    cout << "\n Years: : " << year << "\n Weeks : " << week;
}