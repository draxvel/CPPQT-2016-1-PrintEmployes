#include "office.h"

Office::Office()
{}

void Office::setOffice(Office *p)
    {
        cout<<"Enter a name of office: "<<endl;
        cin>>p->nameOffise;
        cout<<"Enter a address of office: "<<endl;
        cin>>p->addressoffice;
        cout<<"Enter a working area (m^2): "<<endl;
        cin>>p->workingArea;
        cout<<"Enter a count of emloyees: "<<endl;
        cin>>p->countEmployee;
        cout<<endl;
    }

    void Office::print()
   {
        cout<<"Name of office: "<<nameOffise<<endl;
        cout<<"Address of office: "<<addressoffice<<endl;
        cout<<"Working area (m^2): "<<workingArea<<endl;
        cout<<"Count of emloyees: "<<countEmployee<<endl;
   }
