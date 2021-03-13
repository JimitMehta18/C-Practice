#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}


// Volume of cylinder
int volume(double r, int h)
{
    return(3.14 * r * r * h);
}

// Volume of cube
int volume(int a)
{
    return(a * a * a);

}

// Volume of cuboid
int volume(int l, int b, int h)
{
    return(l * b * h);
}

int main()
{
    // int x, y;
    // cout<<"Enter 2 numbers"<<endl;
    // cin>>x;
    // cin>>y;
    cout<<"The volume of cylinder of radius=4 and height=8 is "<<volume(4, 8)<<endl;
    cout<<"The volume of cube of a=4 is "<<volume(4)<<endl;
    cout<<"The volume of cuboid of length=2 breadth= 4 and height=8 is "<<volume(2, 4, 8)<<endl;
    // cout<<"The sum of x and y is "<<sum(x, y)<<endl;
    // cout<<"The sum of 3, 6 and 7 is "<<sum(3, 6, 7)<<endl;
    
    return 0;
}