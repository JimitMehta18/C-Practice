#include<iostream>
using namespace std;

// int sum(int a, int b)
// {
//     int c = a + b;        //Function 
//     return c;
// }

//Function prototype (Assures you that function will be somewhere present after main in the whole program)
// type function-name (arguments);     //syntax



// int sum(int a, int b);     //  --> Acceptable
// int sum(int a, b);         //  --> Not Acceptable
int sum(int , int);           //  --> Acceptable
// void g(void);              //  --> Acceptable
void g();                     //  --> Acceptable

int main()
{
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    g();

    // num1 and num2 are actual parameters

    return 0;
}

int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}

void g()
{
    cout<<"\nHello, Good Morning!!";
}
