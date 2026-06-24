#include <iostream>
using namespace std;
int main() {
    cout<< "Enter the radius of the sphere: ";
    float radius;
    cin>> radius;
    float volume = (4.0/3.0) * 3.141592 * radius * radius * radius;
    cout << "The volume of the sphere is: " << volume << endl;  
}