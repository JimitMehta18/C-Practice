#include<iostream>
using namespace std;

int main()
{
    /*Loops in C++
    Ther are 3 types of loops in C++:
    1. For loop
    2. WHile loop
    3. do-while loop
    */
    
    
    /*For loop in C++*/
    //int i = 1;
    //cout<<i;
    //i++;
    


    //Syntax of for loop
    //   for(initialization; condition; updation)
    // {
    //     loop body (C++ code);
    // }
    
    //Example of for loop 
    //for (int i = 1; i <= 4; i++)
    //{
    //   cout<<i<<endl;
       
    //}

     //Example of infinite for loop 
    //for (int i = 1; 44 <= 48; i++)
    //{
    //   cout<<i<<endl;
       
    //}


    
    /*While loop in C++*/
    //Syntax:
    //while(condition)
    //{
    //    C++ statement;
    //}
    
    // Printing 1-40 using while loop 
    /* 
    int i=1;
    while(i<=40)
    {
        cout<<i<<endl;
        i++;
    }
    */


    //Example of infinite while loop 
   /* 
    int i=1;
    while(true)
    {
        cout<<i<<endl;
        i++;
    }
    */

    /* do-while loop in C++*/
    // Syntax:
    // do
    //{ 
    //    C++ statement;
    //}while(condition); 


    // Printing 1-40 using do-while loop 
    //int i=1;
    //do
    //{
    //   cout<<i<<endl;
    //    i++;
    //}while(i<=40);

    //program for multiplication table of 6
    int a = 6,i = 0;
    do{
        cout<<a*i<<endl;
        i++;
    }while(i<=12);

    
    return 0;
}
