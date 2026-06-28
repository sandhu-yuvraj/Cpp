//Takes three numbers as input and returns the largest and the smallest of the three numbers
#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c ;

    float largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    float smallest = a;
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}