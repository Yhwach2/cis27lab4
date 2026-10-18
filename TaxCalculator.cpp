#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    const double TAX_RATE = 0.075;
    double price;

    cout << "Enter the price of the item: ";
    cin >> price;

    double taxAmount = price * TAX_RATE;
    double totalCost = price + taxAmount;

    cout << fixed << setprecision(2);
    cout << "Original Price: $" << price << endl;
    cout << "Sales Tax:    $" << taxAmount << endl;
    cout << "Total Cost:   $" << totalCost << endl;

    return 0;
}