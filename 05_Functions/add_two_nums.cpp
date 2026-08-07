// C++ program to define function to add two numbers.

#include <iostream>
using namespace std;

// Defining a funtion to add two numbers
int add(int a, int b) {
    return a + b;
}

// Main funtion 
int main() {
    int num1, num2;

    // Taking an input from the user
    cout << "Enter 1st number : ";
    cin >> num1;

    cout << "Enter 2nd number : ";
    cin >> num2;

    // Calling the add function
    int sum = add(num1, num2);

    // Displaying the result of two number's addition
    cout << "Sum of " << num1 << " and " << num2 << " is : " << sum;


    return 0;
}