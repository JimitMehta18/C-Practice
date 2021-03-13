#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }

    void getid(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee jimit, tanvi, bruise, tanu;
    // jimit.setid();
    // jimit.getid();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[0].setid();
        fb[0].getid();
    }

    return 0;
}