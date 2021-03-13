#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// Complete the program
    string a, b, c, temp;
    int d, e;
    cin>>a;
    cin>>b;
    c = a +b;
    d = a.length();
    e = b.length();
   
    cout<<d<<" "<<e<<endl;
    cout<<c<<endl; 

    swap(a[0],b[0]);


    cout<<a<<" "<<b<<endl;
    return 0;
}