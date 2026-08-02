// Find 2^n
// C++ program to find 2 raised to the power n using loops.

#include <iostream>
using namespace std;

int main() {
    int n, i, val;

    // Taking an input from the user
    cout << "Enter the value of n : ";
    cin >> n;

    // Using while loop to calculate 2^n
    val = 1, i = 0;

    while(i < n) {
        val *= 2;
        i++;
    }

    // Displaying the result
    cout << "2^" << n << " = " << val << endl;

    return 0;
}