// 2. A shop will give discount of 10% if the cost of purchased quantity is more than 1000. Ask user for quantity.
// Suppose, one unit will cost 100. Judge and print total cost for user.

#include <iostream>
using namespace std;
int main()
{
    int quantity;
    float price, discountPer=0.1, discount = 0, rate = 100;
    cout << "Enter quantity: ";
    cin >> quantity;
    price = quantity * rate;
    if (price > 1000)
    {
        discount = price * discountPer;
        price -= discount;
    }
    cout << "Total cost of the purchase is: " << price << " after giving discount: " << discount;
    return 0;
}