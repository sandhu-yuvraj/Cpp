// Takes a number as input
// Reverses it
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n==0) cout<<"Reversed number is: "<<0;
    else{
        int rev=0;
        while(n!=0){
            rev= rev*10+n%10; // First multiply by 10 then add the last digit
            n/=10;            // Keep removing the last digit
        }
        cout<<"Reversed number is: "<<rev;
    }
}