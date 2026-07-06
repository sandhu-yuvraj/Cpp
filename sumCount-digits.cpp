// Takes integral number as input and adds and counts its digits
#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int sum = 0;
    int digit = 0;
    if (number==0) {
        digit = 1;
        sum = 0;
    }
    while (number != 0)
    {
        sum = sum + number%10;
        number = number/10 ;
        digit++ ;
    }
    cout<<"Number of digits: "<<digit<<endl;
    cout<<"Sum of digits: "<<sum<<endl;
}