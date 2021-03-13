#include<iostream>
#include<iomanip>

using namespace std;

int main(){


/*
    int a=34;
    cout<<"The value of a is : "<<a<<endl;
    a=45;
    cout<<"The value of a is : "<<a<<endl;

    //*******Constant is C++**********

    const int a = 4;
    cout<<"The value of a is : "<<a<<endl;
    a=44; //Error because a is a constant
    cout<<"The value of a is : "<<a<<endl;

*/

//************Manipulators in C++*****************
/*

    int a = 4, b=44, c= 4444;
    
    cout<<"The value of a w/o setw is: "<<a<<endl;
    cout<<"The value of b w/o setw is: "<<b<<endl;
    cout<<"The value of c w/o setw is: "<<c<<endl;




    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;

   */ 
    
    //**************Operator Precedence*****************

    int a=3, b=4;
    int c = (a*5)+b;
    int d = ((((a*5)+b)-45)+87);
    cout<<c;
    cout<<d;  
    
    
    
    return 0;
}