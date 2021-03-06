#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    BankDeposit()
    {
    }
    BankDeposit(int p, int y, float r); // r can be value like 0.04 (rate of interest in value)
    BankDeposit(int p, int y, int r);   // r can be value like 14(rate of interedst in %)
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << returnvalue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;


    cout<<"Enter the value of p, y & r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    
    
    cout<<"Enter the value of p, y & R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();



    return 0;
}