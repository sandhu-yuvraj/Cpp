/*Checks if a number is prime or composite
  Prime number: Number is which is only divisble by 1 or itself
  Composite number: Number which has multiple(s) other than 1 and itself
  Negative integers, 0 and 1 can not be classfied as prime or composite.
  Asked in Amazon, SAP Labs, VMWare, etc. */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n<=1) cout<<"Neither Prime nor Composite";
   else
   {
        bool Prime= true;
         for(int i = 2 ; i<=n-1; i++) //OR i<= n/2 can also work , since minimum multiple is of 2
         {
            if (n%i == 0)  {Prime = false; break;}
         } 
                                    if (Prime) cout<<"Prime";
                                    else cout<<"Composite";
    }
        return 0;
}