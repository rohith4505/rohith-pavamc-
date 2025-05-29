#include<iostream>
using namespace std;
int main()
{
int num =10;
int *ptr = &num;
cout<<"value of the num"<<num<<endl;
cout<<"address of num "<<ptr<<endl;
cout<<"value of the pointer"<<*ptr<<endl;
return 0;
}