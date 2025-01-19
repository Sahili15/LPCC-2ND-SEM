#include<iostream>
#include<cmath>
using namespace std;
  double area (double length,double width)
  {
    return length*width;
  }
  int main()
  {
    double length,width;
    cout<<"Enter the length and width of the rectangle:";
    cin >> length >> width;
    cout<<"Area of the rectangle:" << area(length,width)<<endl;
  }