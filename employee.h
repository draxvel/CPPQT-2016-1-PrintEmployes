#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <printable.h>

using namespace std;

typedef unsigned int ui;

class Employee: public Printable
{
private:
    string name;
    ui mobilenumber;
    string address;
    ui salary;
    ui year;
    
public:
  void setEmployee(string,ui,string,ui,ui);
  //void getEmployee();

    void print() override;
   
   Employee();

};

#endif // EMPLOYEE_H
