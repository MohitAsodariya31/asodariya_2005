#include <iostream>
using namespace std;
class con
{
    int n;
    public:
        con()
        {
            cout<<"\nconstructor called...";
        }
        con(int a)
        {
            n=a;
            cout<<"\nconstructor called..."<<n;
        }
};
int main()
{
    con c1(10),c2(20),c3(30);
}
  