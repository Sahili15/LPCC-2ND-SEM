#include<iostream>
using namespace std;
void f(int *x)
{
    *x = *x-1;
}
int main(){
    int a =5;
    cout << a << endl;
    f(&a);
    cout << a << endl;
}