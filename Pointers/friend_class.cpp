#include<iostream>
using namespace std;
class GFG {
    private:
        int private_vaiable;
    protected:
        int protcted_variable;
    public:
        GFG()
        {
            private_variable = 10;
            proteced_variable= 99;
        } 
    // friend class declaration 
       friend class F;
};
class F{
public :
      void display(GFG& t)
      {
        cout << "The value of private variable ="<<t.private_variable << 
      }    
};
int main ()
{
    GFG g;
    F fri;
    fri.display(g);
    return 0;
}