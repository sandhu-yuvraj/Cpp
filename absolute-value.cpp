#include <iostream>
using namespace std;
int main() {
    float p;
    cout<<"Enter a number: ";
    cin>>p;
    if (p<0) p *= -1;
    cout<<"The absolute value is: "<<p;
}