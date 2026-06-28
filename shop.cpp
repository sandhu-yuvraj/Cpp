// A shopkeeper applies a discount d% on the marked price of an item.
// The shopkeeper then adds a sales tax of t% on the discounted price to get the final selling price.
// This program takes the marked price, discount percentage, and sales tax percentage as input (in double)
// And it calculates the final selling price of the item.
#include <iostream>
using namespace std;

int main() {
    double markedPrice, discountPercent, salesTaxPercent;
    cout << "Enter the marked price: ";
    cin >> markedPrice;
    cout << "Enter the discount percentage: ";
    cin >> discountPercent;
    cout << "Enter the sales tax percentage: ";
    cin >> salesTaxPercent;

    double discountedPrice = markedPrice - (markedPrice * discountPercent / 100);
    double finalSellingPrice = discountedPrice + (discountedPrice * salesTaxPercent / 100);

    cout << "The final selling price is: $" << finalSellingPrice << endl;

    return 0;
}