#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return n * factorial(n-1);
} 


int fib(int n)
{
    if (n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// DRY RUN
// Step wise calculation of factorial 4
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;


int main()
{
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720 
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!
    int a,b;
    cout<<"Enter a number"<<endl;
    // cin>>a;
    cin>>b;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci series at position "<<b<<" is "<<fib(b)<<endl;
    
    return 0;
}