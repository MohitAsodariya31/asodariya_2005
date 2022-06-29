#include<iostream>
int main()
{
   int length, breadth, area;
 
    std::cout<<"\nEnter the Length of Rectangle : ";
    std::cin>>length;
 
    std::cout<<"\nEnter the Breadth of Rectangle : ";
    std::cin>>breadth;
 
   area = length * breadth;
   std::cout<<"\nArea of Rectangle : "<< area;
 
   return 0;
}