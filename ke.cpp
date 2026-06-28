// Kinetic Energy of a Moving Object
// KE = 0.5 * mass * velocity^2
#include <iostream>
using namespace std;
int main() {
    double mass, velocity, kineticEnergy;

    // Input mass and velocity
    cout << "Enter mass of the object (in kg): ";
    cin >> mass;
    cout << "Enter velocity of the object (in m/s): ";
    cin >> velocity;

    // Calculate kinetic energy
    kineticEnergy = 0.5 * mass * velocity * velocity;

    // Output the result
    cout << "The kinetic energy of the object is: " << kineticEnergy << " Joules" << endl;

    return 0; // End of program
}