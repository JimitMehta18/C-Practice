#include<iostream>
using namespace std;

typedef struct employee
{
    int eID;       //4 bytes memory
    char favchar;  //1 bytes memory   ====  Total 9 bytes
    float salary;  //4 bytes memory
} ep;


//if u use tyypedef and ep u can replace struct employee wep

union money
{
    int rice;      //4 bytes memory 
    char car;      //1 bytes memory  ====  Total 4 bytes
    float pounds;  //4 bytes memory
}; 







int main()
{
    // ep bruise;
    // struct employee j;
    

    // bruise.eID = 1;
    // bruise.favchar = 'd';
    // bruise.salary = 444444;
    // cout<<"The value is "<<bruise.eID<<endl;
    // cout<<"The value is "<<bruise.favchar<<endl;
    // cout<<"The value is "<<bruise.salary<<endl;


    // union money m1;
    // m1.rice = 44;
    // m1.car = 'c';
    // m1.pounds = 44.44;
    // cout<<m1.rice;

    enum meal{breakfast , lunch, dinner};
    meal m1 = breakfast;
    meal m2 = lunch;
    meal m3 = dinner;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    cout<<(m3==0)<<endl; // is position of m3 = 0 in enum meal?

    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;



    return 0;
}