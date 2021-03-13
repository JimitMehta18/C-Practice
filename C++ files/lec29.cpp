#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked(executed/called) whenever an object is created

    Complex(void); // constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};
Complex ::Complex(void)  // This is a default constructor as it accepts no parameter 
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}


/* 

Characteristics of Constructor


1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values nad do not have return types.
4. It can have default arguments
5. We cannot refer to their address 


*/