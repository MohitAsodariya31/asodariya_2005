#include<iostream>
using namespace std;
class findage
{
    int Age;
    public:
    findage(int n)
    {
        Age=n;
        cout<<"\n Age :"<<Age;
    }
    findage(findage&new_Age)
    {
        Age=new_Age.Age;
        cout<<"\n Age :"<<Age;
    }
};
int main()
{
    findage person1(20);
    findage person2(person1);
    return 0;
}