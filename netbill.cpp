#include <iostream>
using namespace std;
int main()
{
    int r, q, a;
    float dis, billamt, gst, netbill;

    cout << "enter r :";
    cin >> r;
    cout << "Enter Q :";
    cin >> q;
    a = r * q;
    if (a < 100)
    {
        dis = a * 0.05;
        billamt = a - dis;
        gst = billamt * 0.28;
        netbill = billamt;
    }
    else
    {
        dis = a * 0.1;
        billamt = a - dis;
        gst = billamt + gst;
        netbill = billamt + gst;
    }
    cout << "rate\tqty\tamt\tdis\tbillamt\tgst\tnetbill";
    cin >> r, q, a, dis, billamt, gst, netbill;
}
