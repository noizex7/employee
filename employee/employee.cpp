#include "employee.h"

Employee::Employee()
{
    idNumber = new int;
    name = new string;
    department = new string;
    position = new string;

    *idNumber = 0;
    *name = "";
    *department = "";
    *position = "";
}

Employee::Employee(int* aID, string* aName)
{
    idNumber = new int;
    name = new string;
    department = new string;
    position = new string;

    *department = "";
    *position = "";

    setID(aID);
    setName(aName);
}

Employee::Employee(int* aID, string* aName, string* aDepartment, string* aPosition)
{
    idNumber = new int;
    name = new string;
    department = new string;
    position = new string;

    setAll(aID, aName, aDepartment, aPosition);
}

Employee::~Employee()
{
    delete idNumber;
    delete name;
    delete department;
    delete position;
}

Employee Employee::setID(int* aID)
{
    try
    {
        if (*aID < 0 || *aID > 50)
        {
            string exceptionString = "Invalid ID. Id set to 0\n";
            throw exceptionString;
        }
        *idNumber = *aID;
    }
    catch (string exceptionString)
    {
        *idNumber = 0;
        cout << exceptionString;
    }

    cout << "Id set to " << *idNumber << endl;

    return *this;
}

Employee Employee::setName(string* aName)
{
    *name = *aName;

    cout << "Name set to " << *name << endl;

    return *this;

}

Employee Employee::setDepartment(string* aDepartment)
{
    *department = *aDepartment;

    cout << "\n\nDepartment set to " << *department << endl;

    return *this;

}

Employee Employee::setPosition(string* aPosition)
{
    *position = *aPosition;

    cout << "Position set to " << *position << "\n\n\n";

    return *this;

}

void Employee::setAll(int* aID, string* aName, string* aDepartment, string* aPosition)
{
    setID(aID).setName(aName).setDepartment(aDepartment).setPosition(aPosition);
}

int* Employee::getID() const
{
    return idNumber;
}

string* Employee::getName() const
{
    return name;
}

string* Employee::getDepartment() const
{
    return department;
}

string* Employee::getPosition() const
{
    return position;
}

void Employee::display()
{
    cout << setw(15) << left << *getName() << setw(15) << left << *getDepartment() << setw(15) << left
        << *getPosition() << setw(15) << left << *idNumber << endl;
}
