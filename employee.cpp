#include <iostream>
#include "employee.h"
#include "printable.h"

using namespace std;

Employee::Employee()
{
}
    void Employee::setEmployee(string name1,ui mobi1,string address1,ui salary1, ui year1)
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
        cin>>year1;
        year=year1;
    }
    
   void Employee::print()
   {
       cout<<endl;
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

   }






