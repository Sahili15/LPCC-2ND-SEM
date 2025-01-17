#include<iostream>
using namespace std;
class My_Class{
    int num;
public:
    void set_number(int value) {num = value;}
    void show_number();    
};
void My_Class::show_number()
{
    cout << num << "\n";
}
int main()
{
 My_Class object,*p;
 object.set_number(1);
 object.show_number();
 p = &object;
 p->show_number();
 return 0;   
}  

