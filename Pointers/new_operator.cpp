#include<iostream>
#include<memory>
using namespace std;
int main ()
{
    int*ptr;
    ptr= new int;
    *ptr = 10;
    cout << "Address :" << ptr << endl;
    cout << "value:" << *ptr;
    return 0; 
}