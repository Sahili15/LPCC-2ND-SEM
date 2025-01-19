#include<iostream>
using namespace std;

bool leapyear(int y);
int main()
{
    int y;
    cout<<"Enter year:";
    cin>>y;
    bool flag= leapyear(y);
    if(flag == true)
    cout << y <<"is a leap year";
    else
    cout<< y <<"is not a leap year";
    return 0;
}
bool leapyear (int y){
    bool isleapyear =false;
    if (y% 4==0)
    {
        if(y%100==0)
        {
            if(y%400==0){
                isleapyear = true;
            }
        } 
        else isleapyear = true;
    }
    return isleapyear;
}