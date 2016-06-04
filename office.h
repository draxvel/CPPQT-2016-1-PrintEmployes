#ifndef OFFICE_H
#define OFFICE_H
#include <string>
#include <printable.h>

class Office :public Printable
{
private:
    string nameOffise;
    string addressoffice;
    float workingArea;
    int countEmployee;
public:    
    void setOffice (Office *p);
    void print() override;

    Office();

};

#endif // OFFICE_H
