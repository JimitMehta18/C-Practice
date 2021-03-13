#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // initialize yaha se nahi hoga
    //   for eg static int count = 1000 aise syntax error dega

public:
    void setData(void)
    {
        cout << "Enter the Id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this Employee is " << id << " and this is Employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id;  // Throws an error as id is not a static variable
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count; // Default value is 0
//                 yaha initialize kar sakte int Employee :: count=1000;
int main()
{
    Employee jimit, tanvi, BRUISE;
    // Count is the static data member of class Employee
    // jimit.id = 1;
    // jimit.count = 1; // cannot do this as id and count are private
    jimit.setData();
    jimit.getData();
    Employee ::getCount();

    tanvi.setData();
    tanvi.getData();
    Employee ::getCount();

    BRUISE.setData();
    BRUISE.getData();
    Employee ::getCount();
    return 0;
}