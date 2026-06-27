#include <iostream>
using namespace std;
int main() {
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    float area = length * width;
    float perimeter = 2 * (length + width);
    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
    if (area > perimeter) {
        cout << "The area is greater than the perimeter." << endl;
    } else if (area < perimeter) {
        cout << "The perimeter is greater than the area." << endl;
    } else {
        cout << "The area and perimeter are equal." << endl;
    }
    return 0;
}