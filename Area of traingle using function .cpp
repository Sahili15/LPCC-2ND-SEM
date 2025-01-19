#include<iostream>
#include<cmath>
using namespace std;

double area(double base,double height)
{
    return 0.5*base*height;
}
int main()
{
    double base,height;
    cout<<"Enter the base and height of the triangle;";
    cin >> base >> height;
    cout << "Area of the triangle:"<<area(base,height) << endl;
}