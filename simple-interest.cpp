#include <iostream>
using namespace std;
int main() 
{
    float p, r, t;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time in years: ";
    cin >> t;
    float simple_interest = (p * r * t) / 100;
    float sum = p + simple_interest ;
    cout << "Simple Interest is: " << simple_interest << endl;
    cout << "Amount to be paid back is: " << sum << endl;
}
