#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age; 

    //***********Selection control structure if-else***************
    /*
    if((age<18) && (age>0)){
        cout<<"Not an adult"<<endl;
    }
    else if(age==18){
        cout<<"Eligible"<<endl;
    }
    else if(age<1){
        cout<<"Not Valid"<<endl;
    }
    else{
        cout<<"Adult"<<endl;
    } */

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 4:
        cout<<"You are 4"<<endl;
        break;

    default:
    cout<<"Not Valid"<<endl;
        break;
    }

    cout<<"Done with s/w case"<<endl;








    return 0;     
}
