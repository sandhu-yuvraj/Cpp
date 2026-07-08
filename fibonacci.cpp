// This program prints Fibonacci Sequence upto n terms.
// Its a famous mathematical pattern where each number is the sum of the preceding ones.
// Formula: Fn = Fn-1 + Fn-2
// First two number are F0 = 0 and F1 = 1
// It creates an infinte series.
// Used frequently in DSA, like fibonacci heaps.
#include <iostream>
using namespace std;
int main (){
    int n , a = 0 , b =1 , c;
    cout<<"Enter a number: ";
    cin>>n;
    for( int i = 0; i<n; i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}