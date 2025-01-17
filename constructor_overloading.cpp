#include<iostream>
using namespace std;
class boot{
      int m,n;
      public:
      boot(int x,int y)
      {
        m= x;
        n= y;
      }
      boot(int x){
        m=x;
        n=0;
      }
      void printNumber(){
         cout<<"your number is :"<<"m="<<m<<"n="<<n;
      }
};
int main()
{
     boot hello(5,10);
     hello.printNumber();
     boot hello2(5);
     hello2.printNumber();
     return 0;
}