// 4. check that whether a number is even or odd.

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The number " << number << " is " << (number % 2 == 0 ? "even." : "odd.");
    return 0;
}