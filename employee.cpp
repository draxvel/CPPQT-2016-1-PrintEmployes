#include <iostream>
#include "employee.h"
#include "printable.h"

using namespace std;

Employee::Employee()
{}

void Employee::setEmployee(Employee *p)
    {  
        cout<<"Enter a name: "<<endl;
        cin>>p->name;
        cout<<"Enter a mobilenumber: "<<endl;
        cin>>p->mobilenumber;
        cout<<"Enter a address: "<<endl;
        cin>>p->address;
        cout<<"Enter a salary: "<<endl;
        cin>>p->salary;
        cout<<"Enter a years: "<<endl;
        cin>>p->year;
        cout<<endl;
    }
    
    void Employee::print()
   {
       cout<<endl;
       cout<<"Name: "<<name;
        cout<<endl;
       cout<<"Mobile number: "<<mobilenumber;
        cout<<endl;
       cout<<"Address: "<<address;
        cout<<endl;
       cout<<"Salary: "<<salary;
        cout<<endl;
       cout<<"Year: "<<year;
   }


