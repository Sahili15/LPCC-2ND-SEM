#include<iostream>
#include<cmath>
using namespace std;
double area(double radius)
{
    float pi = 3.14;
    return M_PI*radius*radius;
}
double area(double length,float width)
{
    return length*width;
}
double area(double base,double height)
{
    return 0.5*base*height;
}
int main()
{
     double radius,length,base,height;
     float width;
     cout<<"Enter the radius of the circle :";
     cin>>radius;
     cout<<"Area of circle:"<<area(radius)<<endl;
     cout<<"Enter the length and width of the rectangle:";
     cin>>length>>width;
     cout<<"Area of the rectangle:"<<area(length,width)<<endl;
     cout<<"Enter the base and height of triangle:";
     cin>>base>>height;
     cout<<"Area of triangle:"<<area(base,height);
     return 0;
}
