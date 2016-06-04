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
    Employee();
  void setEmployee(Employee *p);
  void print() override;
   

};

#endif // EMPLOYEE_H
