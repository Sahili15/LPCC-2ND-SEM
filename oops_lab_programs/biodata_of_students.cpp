#include<iostream>
#include<string>
using namespace std;
class Student
  {
    private:
       string name;
       int age;
       string address;
       string phoneNumber;
    public:
    Student(string n,int a, string addr,string phone)
    {
           name= n;
           age= a;
           address=addr;
           phoneNumber=phone;
    }   

    void displayBiodata()
    {
          cout << "Name:"<< name << endl;
          cout << "Age:"<< age << endl;
          cout << "Address:"<< address << endl;
          cout << "Phone Number:"<<phoneNumber<<endl;
    }
  };
  int main()
   {
        Student student1("Pri",20,"Bhilai.Risali","123-456-7892");
        Student student2("kabir",23,"456-Bhilai,chinawn","946-567-8741");
        cout<<"Biodata of Student1:"<<endl;
        student1.displayBiodata();

        cout<<"\n Biodata of Student 2:"<<endl;
        student2.displayBiodata();
        return 0;
   }