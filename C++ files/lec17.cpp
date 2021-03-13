#include<iostream>
using namespace std;

inline int product(int a, int b) // baar baar return nai hoga which will save time
{
    // sttic variable not recommended to use below lines with inline functions
    // int c = 0;            // c is initialized whenever the function runs
    // static int c = 0;     // c is initialized only once
    // c = c + 1;            // Next time funtion is run, the lsat value of c will be effective
    return a*b;
}

float moneyreceived(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}

// int strlen(const char* p)  // so that p cannot be changed in the function
// {

// }

int main()
{
    int a, b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    int money = 100000;
    cout<<"\nIf you have "<<money<<" Rs in you bank account, you will receive "<<moneyreceived(money)<<" Rs after 1 year"<<endl;
    cout<<"\nFor VIP: If you have "<<money<<" Rs in you bank account, you will receive "<<moneyreceived(money, 1.10)<<" Rs after 1 year\n"<<endl;

    return 0;
} 