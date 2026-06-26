#include <iostream>
using namespace std;
int main()
{
    float x;
    cout << "Enter a number: ";
    cin >> x;
    int y = (int)x;
    if (x == y) 
    {
        cout << "The number is an integer." << endl;
    } else 
    {
        cout << "The number is not an integer." << endl;
    }
}