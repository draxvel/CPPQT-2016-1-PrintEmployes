#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;


typedef unsigned int ui;

class Employee
{
    
private:
    
    string name;
    ui mobilenumber;
    string address;
    ui salary;
    ui year;
    
public:
   // void test();


//    void setName(string *);

  void setEmployee(string,ui,string,ui,ui);
  void getEmployee();
   
//   void setMobilenumber (ui);

//   void setAddress(char *);
   
//   void setSalary (ui);
   
//   void setYear (ui);;
   
   Employee();
};

#endif // EMPLOYEE_H
