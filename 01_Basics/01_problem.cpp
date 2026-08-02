// Problem : Write a C++ program that takes two integer inputs from the user.
// Calculate and display the sum, difference, product, and integer quotient of these two numbers.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Taking an input from the user
    cout << "Enter first value : ";
    cin >> num1;

    cout << "Enter second value : ";
    cin >> num2;

    // Calculating sum, difference, product, integer quotient and display the results
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    cout << "Sum : " << sum << endl;
    cout << "Difference : " << diff << endl;
    cout << "Product : " << product << endl;
    cout << "Quotient : " << quotient << endl;

    return 0;
}