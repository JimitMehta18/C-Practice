#include<iostream>
#include <stdio.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function 
    int sum, diff;
    sum = (*a + *b);
    diff = abs(*a - *b);
    *a = sum;
    *b = diff;
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}
