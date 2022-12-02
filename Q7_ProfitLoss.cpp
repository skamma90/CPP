// 7. Program to calculate profit or loss.

#include <iostream>
using namespace std;
int main()
{
    float CostPrice, SellingPrice;
    cout << "Enter cost price of the product: ";
    cin >> CostPrice;
    cout << "Enter selleing price of the product: ";
    cin >> SellingPrice;
    if (CostPrice > SellingPrice)
        cout << "The loss amout is " << CostPrice - SellingPrice;
    else if (SellingPrice > CostPrice)
        cout << "The profit amount is " << SellingPrice - CostPrice;
    else
        cout << "No profit or loss made.";
    return 0;
}