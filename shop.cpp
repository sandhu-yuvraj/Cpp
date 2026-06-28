// A shopkeeper applies a discount d% on the marked price of an item.
// The shopkeeper then adds a sales tax of t% on the discounted price to get the final selling price.
// This program takes the marked price, discount percentage, and sales tax percentage as input (in double)
// And it calculates the final selling price of the item.
#include <iostream>
using namespace std;

int main() {
    double m, d, t;
    cout << "Enter the marked price: ";
    cin >> m;
    cout << "Enter the discount percentage: ";
    cin >> d;
    cout << "Enter the sales tax percentage: ";
    cin >> t;

    double dp = m - (m * d / 100);
    double sp = dp * (1 + t / 100);

    cout << "The final selling price is: $" << sp << endl;

    return 0;
}