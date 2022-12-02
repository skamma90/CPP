// 1. Enter values of length and breadth of a rectangle from user and check if it is square or not.

#include <iostream>
using namespace std;
int main()
{
    float length, breadth;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter breadth of the rectangle: ";
    cin >> breadth;

    if (length == breadth)
        cout << "It is a square.";
    else
        cout << "It is not a square";
    return 0;
}