#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout<< "Enter first side of triangle: ";
    cin>> a;
    cout<< "Enter second side of triangle: ";
    cin>> b;
    cout<< "Enter third side of triangle: ";
    cin>> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout<< "The triangle is valid." << endl;
        if (a==b && b==c) cout<<"Triangle is equilateral"<<endl;
        else if (a==b || b==c || a==c) cout<<"Triangle is isosceles"<<endl;
        else cout<<"Triangle is scalene"<<endl;

    } else {
        cout<< "The triangle is not valid." << endl;
    }
    return 0;   
}