// Factorial of a number is the product of all positive integers less than or equal to that number.
// Factorial of n is denoted as n! = n * (n-1) * (n-2) * ... * 2 * 1
// Factorial of 0 is defined as 1 (0! = 1)
// Factorial is only defined for whole numbers (non-negative integers).
// Asked in interview of various companies like Morgan Stanley, Samsung and Wipro.
#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
         cout<<"Enter a whole number: ";
          cin>>n;
        } while (n<0);
   long long fact=1;
   for (int i=1; i<=n; i++)  // If n is 0, loop will not execute and fact will remain 1, which is indeed correct
   {                         // 0! = 1
    fact *= i;
   }
   cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
   return 0;
}