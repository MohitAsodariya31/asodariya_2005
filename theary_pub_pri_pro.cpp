#include<iostream>
using namespace std;
class Base
{
    private:
        int pvt=1;
    protected:
        int prot=2;
    public:
        int pub=3;
        int getpvt()
        {
            return pvt;
        }
};
class publicDerived : protected Base
{
    public:
        int getprot()
        {
            return prot;
        }
        int getpublic()
        {
            return pub;
        }
};
int main()
{
    publicDerived object1;
    //cout <<"private ="<<object1.getpvt()<<endl;
    cout<<"protected="<<object1.getprot()<<endl;
    cout<<"public="<<object1.getpublic()<<endl;
    //cout<<"public="<<object1.pub<<endl;

    return 0;
}

