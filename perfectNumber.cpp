// This program takes input and tests if a number is perfect or not.
// Perfect number is a positive integer that is equal to the sum of its proper divisors.
// Proper divisor of a number is a positive divisor of the number,
// Excluding the number itself.
// Example: 28 = 1 + 2 + + 4 + 7 + 14
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    for (int i =1; i<n; i++)
       {
        if ( n%i==0) {
            sum = sum + i;
        }
       }
       if (sum == n) cout<<n<<" is a perfect number.";
       else cout<<n<<" is not a perfect number." ;
}