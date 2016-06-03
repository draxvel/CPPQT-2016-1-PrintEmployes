#include <iostream>
#include "employee.h"
#include "printable.h"

using namespace std;

Employee::Employee()
{
//    string name;
//    ui mobilenumber;
//    string address;
//    ui salary;
//    ui year;
}
    void Employee::setEmployee(string name1,int mobi1,string address1,int salary1, int year1)
    {
        cout<<"Enter a name: "<<endl;
        cin>>name1;
        name=name1;
        cout<<"Enter a mobilenumber: "<<endl;
        cin>>mobi1;
        mobilenumber=mobi1;
        cout<<"Enter a address: "<<endl;
        cin>>address1;
        address=address1;
        cout<<"Enter a salary: "<<endl;
        cin>>salary1;
        salary=salary1;
        cout<<"Enter a years: "<<endl;
        cin>>year;
        year=year1;
        cout.flush();
        cin.clear();
        cout<<"Done";
    }
    
   void Employee::print()
   {
       cout<<name;
        cout<<endl;
       cout<<mobilenumber;
        cout<<endl;
       cout<<address;
        cout<<endl;
       cout<<salary;
        cout<<endl;
       cout<<year;
        cout<<endl;
        cout<<"all is print";
   }






