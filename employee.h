#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <printable.h>

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
  void setEmployee(Employee *p);
  void print() override;
   
   Employee();
};

#endif // EMPLOYEE_H
