// 5. Program to check whether a number is divisible by 5 and 11 or not.
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 5 == 0 && number % 11 == 0)
        cout << "The number " << number << " is divisible both by 5 and 11.";
    else
        cout << "The number " << number << " is not divisible by either 5 or 11 or both.";
    return 0;
}
