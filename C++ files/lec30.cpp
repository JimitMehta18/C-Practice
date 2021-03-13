#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int , int ); // constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};
Complex ::Complex(int x, int y) // This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex a(4, 8);
    a.printNumber();

    // Explicit call
    Complex b = Complex(8, 16);
    b.printNumber();
    
    return 0;
}