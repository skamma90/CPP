// 3. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.

#include <iostream>
using namespace std;
int main()
{
    float year, salary, bonusPer = 0.05, bonus;
    cout << "Enter your salary: ";
    cin >> salary;
    cout << "Enter year of service: ";
    cin >> year;
    bonus = year > 5 ? salary * bonusPer : 0;
    cout << "Your net bonus amount is: " << bonus;
}