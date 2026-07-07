// Takes a number as input and multiplies all its digits
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int prod = 1;
    if (n==0) cout<<"Product of digits: "<<0; return 1;
    while (n!=0) {
        prod = prod*(n%10);
        n=n/10;
    }
      cout<<"Product of digits: "<<prod;
      return 0;
}