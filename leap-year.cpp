// Nomral Year has 365 days
// Leap Yeaar has 366 days
// Leap is divisible by 4
// But if it is divisible by 100 its not a leap year
// But if it is divisible by 400 its a leap year
// Leap years exist because Earth actually takes about 365.2422 days to orbit the Sun.
// Creating a fractional remainder that adds up over time. 
// If we only used a standard 365-day calendar. 
// Our seasons would eventually drift backward and fall out of alignment with the months. 
// To fix this, we add a leap day every four years.
// But adding a full day every four years slightly overcompensates for the true solar cycle. 
// To perfect the accuracy, century years like 1700, 1800, and 1900 are excluded from being leap years.
// Unless they can be evenly divided by 400. 
// Because 1700 is divisible by 100 but not by 400. 
// It skips the leap day to ensure our calendar remains perfectly in sync with Earth's orbit.
#include <iostream>
using namespace std;
int main () {
    int y;
    cout<<"Enter the year: ";
    cin>>y;
    if (( (y%4 == 0) && (y%100 != 0)) || ((y%400==0))) cout<<"Leap Year" ;
    else cout<<"Not a Leap Year";
}