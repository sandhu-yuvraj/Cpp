//For a given point, program finds if it lies in 1st Quadrant, 2nd Quadrant, 3rd Quadrant, 4th Quadrant
//or on the X-axis or Y-axis or at the origin.
#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter the coordinates of the point (x y): "; //Input the coordinates of the point, example: 5 69
                                                          // means x=5 and y=69
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "The point lies in the 1st Quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point lies in the 2nd Quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point lies in the 3rd Quadrant." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point lies in the 4th Quadrant." << endl;
    } else if (x == 0 && y == 0) {
        cout << "The point is at the origin." << endl;
    } else if (x == 0) {
        cout << "The point lies on the Y-axis." << endl;
    } else {
        cout << "The point lies on the X-axis." << endl;
    }

    return 0;
}