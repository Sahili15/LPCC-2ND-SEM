#include<iostream>
using namespace std;
class class1{
       private:
       int num1;
       int num2;
       friend int addprivate(const class1 obj);
       public:
       class1(int n1,int n2):num1(n1),num2(n2){}
};
int addprivate(const class1 obj){
       return obj.num1+obj.num2;
}
int main()
{
    class1 obj1(10,7);
    std::cout<<"the sum of two private numbers is: "<<addprivate(obj1)<<endl;
    return 0;
}