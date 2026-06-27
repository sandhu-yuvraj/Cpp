#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;
int main() {
    int x = INT_MAX;
    int y = INT_MIN;
    long long z = LLONG_MAX;
    long long w = LLONG_MIN;
    double a = DBL_MAX;
    double b = DBL_MIN;
    short s = SHRT_MAX;
    short t = SHRT_MIN;
    cout << "Maximum value of int: " << x << endl;
    cout << "Minimum value of int: " << y << endl;
    cout << "Maximum value of long long: " << z << endl;
    cout << "Minimum value of long long: " << w << endl;
    cout << "Maximum value of double: " << a << endl;
    cout << "Minimum value of double: " << b << endl;
    cout << "Maximum value of short: " << s << endl;
    cout << "Minimum value of short: " << t << endl;
    return 0;
}