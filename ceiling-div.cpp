// Ceiling divison rounds of to nearest integer
// ex: 7/2 = 4 in ceiling division
// ex: 7/2 = 3 in normal division
// This function takes two integers a and b and returns the ceiling of their division
//  Formula: (a + b - 1) / b
// Input: a (dividend), b (divisor)

#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter dividend (a): ";
    cin >> a;
    cout << "Enter divisor (b): ";
    cin >> b;

    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1; // Exit with error code
    }

    int ceiling_division = (a + b - 1) / b;
    cout << "Ceiling division of " << a << " by " << b << " is: " << ceiling_division << endl;

    return 0; // Exit successfully
}