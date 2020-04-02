#include "employee.h"

void setEmployee(Employee);

int main()
{
    bool* error = nullptr;
    error = new bool;

    Employee* list = nullptr;

    int* size = nullptr;
    size = new int;

    *size = 2;

    /*
    do
    {
        *error = false;
        cout << "Enter the number of employees";
        cin >> *size;
        if (*size <= 0)
        {
            *error = true;
            cout << "Invalid size, try again.\n";
        }
    } while (error);
    */

    delete error;

    list = new Employee[*size];

    for (int i = 0; i < *size; i++)
    {
        cout << "Setting employee " << i + 1 << ':' << endl;
        setEmployee(list[i]);
    }

    cout << string(80, '\n');

    cout << setw(15) << left << "Name" << setw(15) << left << "Department" << setw(15) << left
        << "Position" << setw(15) << left << "Id Number" << endl;

    for (int i = 0; i < *size; i++)
    {
        list[i].display();
    }

    delete[] list;
    delete size;

    return 0;
}

void setEmployee(Employee aPerson)
{
    int aIdNumber;
    string aName;
    string aDepartment;
    string aPosition;


    cout << "Enter Id Number:\n";
    cin >> aIdNumber;

    cin.ignore();

    cout << "Enter Employee name:\n";
    getline(cin, aName);

    cin.clear();

    cout << "Enter the department the employee worsk for:\n";
    getline(cin, aDepartment);

    cin.clear();

    cout << "Enter the position of the employee:\n";
    getline(cin, aPosition);

    aPerson.setDepartment(&aDepartment).setID(&aIdNumber).setName(&aName).setPosition(&aPosition);

}