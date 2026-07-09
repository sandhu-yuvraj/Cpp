// A palindrome number reads same forward and backward.
// This program tests if a number is palindrome or not.
// Using reverse of a number.
// Asked in interview of Zoho, Samsung, Oracle, Adobe etc.
#include <iostream>
using namespace std;
int main() {
int n;
    cout<<"Enter a number: ";
    cin>>n;
    int old = n;  // Since we will be changing n, therefore we store the original number in old
    if (n==0) cout<<0<<" is palindrome.";
    else{
        int rev=0;
        while(n!=0){
            rev= rev*10+n%10; // First multiply by 10 then add the last digit
            n/=10;            // Keep removing the last digit
        }
        if ( rev == old) cout<<rev<<" is a palindrome.";
    else cout<<old<<" is not a palindrome.";
    }
}