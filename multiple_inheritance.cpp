#include<iostream>
using namespace std;
class Vehicle{
public:
      Vehicle()
      {
        std::cout<< "This is a vehicle\n";
      }
} ;
class FourWheeler {
public:
      FourWheeler()
      {
         std::cout << "This is a 4 wheeler Vehicle\n";
      }
};
class Car : public Vehicle,public FourWheeler {
};
int main()
{
    Car obj;
    return 0;
}