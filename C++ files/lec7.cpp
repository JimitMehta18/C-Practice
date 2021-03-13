#include<iostream>
using namespace std;

int c = 45;

int main()
{
    //*******************Build in Data Types*************
    /*int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;  
    c=a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The gl9obal c is "<<::c;*/
    
    //********************float, long double LITERALS*****************
    /*
    float d = 44.4f;
    long double e = 44.4l;
    cout<<"The size of 44.4 is "<<sizeof(44.4)<<endl;
    cout<<"The size of 44.4 is "<<sizeof(44.4f)<<endl;
    cout<<"The size of 44.4 is "<<sizeof(44.4l)<<endl;
    

    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    */


    //*********************Refrence Variables******************
    //float x = 444;
    //float & y = x;
    //cout<<x<<endl<<y<<endl;

    //*****************Typecating***************
    int a = 44;
    cout<<"The value of a is "<<(float)a<<endl;


    float b = 44.44;
    cout<<"The value of b is "<<(int)b<<endl;

    cout<<"The value of a + b is "<<a + b<<endl;
    cout<<"The value of a + (int)b is "<<a + (int)b<<endl;
    cout<<"The value of a + int(b) is "<<a + int(b)<<endl;


    return 0;


}
