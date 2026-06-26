#include <iostream>
using namespace std;
int main(){
    float c, s;
    cout << "Enter the cost price of the item: ";
    cin>> c;
    cout << "Enter the selling price of the item: ";
    cin>> s;
    if (s > c) cout<< "Profit: " << s - c;
    else if (c > s) cout<< "Loss: " << c - s;
    else cout<< "No Profit No Loss";
}