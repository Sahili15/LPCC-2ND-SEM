#include<iostream>
using namespace std;
class constructor{
         static int count;
    public:
         constructor()
         {
            ++count;
         }
      static int getdata()
         {
            return count;
         }
};
int constructor::count=0;
int main()
{
    constructor c1,c2,c3,c4;
    cout<<"the number of constructor objects:"<< constructor ::getdata();
    return 0;
}