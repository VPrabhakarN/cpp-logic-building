// C++ program to calculate the factorial of a number using loops.

#include <iostream>
using namespace std;

int main() {
    // Taking an input from the user for the number to calculate the factorial
    int num;

    cout << "Enter the number to calculate the factorial : ";
    cin >> num;

    // Initializing a variable to store the factorial result
    long long factorial = 1;

    // Using for loop to calculate the factorial of the number
    for(int i=1; i<= num; i++) {
        factorial *= i;
    }

    // Displaying the results of the factorial calculation
    cout << "Factorial of " << num << " is : " << factorial << endl;

    return 0;
}
