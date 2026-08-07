// C++ program to define a function to swap two numbers.

#include <iostream>
using namespace std;

// Defining a function to swap two numbers
void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// Main Function 
int main() {
    // Taking numbers as input from the user
    int a, b;

    cout << "Enter 1st Number : ";
    cin >> a;
    cout << "Enter 2nd Number : ";
    cin >> b;

    cout << "======== Before swapping ========" << endl;
    cout << "1st Number : " << a << endl;
    cout << "2nd Number : " << b << endl;
    cout << "=================================" << endl;
    
    // Calling the swap function
    swap(a, b);
    
    // Displaying the result after swapping
    cout << "======== After swapping ========" << endl;
    cout << "1st Number : " << a << endl;
    cout << "2nd Number : " << b << endl;
    cout << "=================================" << endl;
    
    return 0;
}
