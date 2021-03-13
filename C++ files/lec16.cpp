#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a, b   as directly the values are printed
// (provided values in the main function are copied) 
void swap(int a, int b)
{                        // temp    a    b
    int temp = a;        //   4     4    5
    a = b;               //   4     5    5
    b = temp;            //   4     5    4
}

// Call by reference using pointers
void swappointer(int* a, int* b)  // While the function variable takes value from address
{                         // temp    a    b
    int temp = *a;        //   4     4    5
    *a = *b;              //   4     5    5
    *b = temp;            //   4     5    4
}


// Call by reference using C++ reference variables
void swapreferencevar(int &a, int &b)  // While the function variable takes value from address
{                         // temp    a    b
    int temp = a;         //   4     4    5
    a = b;                //   4     5    5
    b = temp;             //   4     5    4
}


// int &swapreferencevar(int &a, int &b)  // While the function variable takes value from address
// {                         // temp    a    b
//     int temp = a;         //   4     4    5
//     a = b;                //   4     5    5
//     b = temp;             //   4     5    4
//     return a;
// }

int main()
{
    int x = 4, y = 5;
    // cout<<"The sum of a & b is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y);                    // will not swap
    // swappointer(&x, &y);           // will swap using pointer reference
    swapreferencevar(x, y);           // will swap using reference variable (bcoz a is 'pointing' x and b is 'pointing' y)
    // swapreferencevar(x, y) = 766;  // will change the reference(value) of a bcoz of int '&'swapreferencevar
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}