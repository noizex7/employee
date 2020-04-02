#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Employee
{
private:
    int* idNumber;
    string* name;
    string* department;
    string* position;
public:
    Employee();
    Employee(int*, string*);
    Employee(int*, string*, string*, string*);
    ~Employee();
    Employee setID(int*);
    Employee setName(string*);
    Employee setDepartment(string*);
    Employee setPosition(string*);
    void setAll(int*, string*, string*, string*);
    int* getID() const;
    string* getName() const;
    string* getDepartment() const;
    string* getPosition() const;
    void display();

};
#endif