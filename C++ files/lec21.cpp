#include<iostream>
using namespace std;



// class Employee
// {
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setData(int a1, int b1, int c1);  // Declaration
//         void getData()
//         {
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }
// };

// void Employee :: setData(int a1, int b1, int c1)  //Syntax to declare outside class
// {                                                 // '::' - Scope resolution operator   
//     a = a1;
//     b = b1;
//     c = c1;
// }



class Student
{
    private:
        float pointers;
    public:
        string div; int roll; char stu_name[20];
        void setdata(float x);
        // void studentdiv(char division);
        void getdata()
        {
            cout<<"Enter name "<<endl;
            cin>>stu_name;
            cout<<stu_name<<"'s Sem 5 pointer "<<pointers<<endl;
            cout<<stu_name<<"'s Division "<<div<<endl;
            cout<<stu_name<<"'s Roll No "<<roll<<endl;
            

        }
};

void Student :: setdata(float x)
{
    pointers = x;
}

// void Student :: studentdiv(char division)
// {
//     div = division;
// }

int main()
{
    // Employee bruise;
    // // bruise.a = 88;  // This will throw error as a is private and cannot be edited like this
    // bruise.d = 16;
    // bruise.e = 44;
    // bruise.setData(2,4,8);
    // bruise.getData();


    Student Jimit;
    Jimit.div = 'A';
    Jimit.roll = 47;
    Jimit.setdata(9.85);
    Jimit.getdata();

    Student Tanvi;
    Tanvi.div = 'A';
    Tanvi.roll = 49;
    Tanvi.setdata(9.15);
    Tanvi.getdata();
    return 0;
}