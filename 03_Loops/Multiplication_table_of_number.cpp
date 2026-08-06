// C++ program to print multiplication table of a number using loops

#include <iostream>
using namespace std;

int main() {
    // Taking input number from the user
    int num;

    cout << "Enter a number to print it's Multiplication Table : ";
    cin >> num;

    // Using for loop to print the multiplication table
    cout << "Multiplication table of " << num << " is : " << endl;
    for (int i=1; i<=10; i++) {
        cout << num << " X " << i << " = " << num * i << endl;
    }

    return 0;
}