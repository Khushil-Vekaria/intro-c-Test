#include <iostream>

using namespace std;

int main() {
    float buyingPrice, sellingPrice, profit;

    cout << "Enter the buying price of the vehicle: ";
    cin >> buyingPrice;

    cout << "Enter the selling price of the vehicle: ";
    cin >> sellingPrice;

    profit = sellingPrice - buyingPrice;

    cout << "The profit/loss made from selling this vehicle is: " << profit << endl;

    return 0;
}