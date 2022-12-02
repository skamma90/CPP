// 6. Program to check whether the triangle is an equilateral, isosceles or scalene triangle.

#include <iostream>
using namespace std;
int main()
{
    float side1, side2, side3;
    cout << "Enter length of first side of the triangle: ";
    cin >> side1;
    cout << "Enter length of second side of the triangle: ";
    cin >> side2;
    cout << "Enter length of third side of the triangle: ";
    cin >> side3;
    if (side1 == side2 && side1 == side3)
        cout << "The triangle is equilateral triangle.";
    else if (side1 == side2 || side1 == side3 || side2 == side3)
        cout << "The triangle is isosceles triangle.";
    else
        cout << "The triangle is scalene triangle.";
    return 0;
}