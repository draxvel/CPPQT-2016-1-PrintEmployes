#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
    string name;
    ui mobilenumber;
    string address;
    ui salary;
    ui year;
}



//            void Employee::setName(string *name1)
//            {
//                cout<<"Enter a name: "<<endl;
//                cin>>name1;

//            }




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
        cin>>year;
        year=year1;
    }
    
   void Employee::getEmployee()
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
   }




//  void Employee::test()
//{
//    cout<<"Good"<<endl;
//}
    


