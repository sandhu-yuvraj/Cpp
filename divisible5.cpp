#include <iostream>
using namespace std;
int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    if ( i%5 == 0)
        cout << i << " is divisible by 5." << endl;
    else
        cout << i << " is not divisible by 5." << endl;
    return 0;
}