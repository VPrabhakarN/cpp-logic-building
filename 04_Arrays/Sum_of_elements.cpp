// C++ program to calculate the sum of Elements.

#include <iostream>
using namespace std;

int main() {
    // Taking the size of an array from the user
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;

    // Initializing an array from the given size
    int arr[size];

    // Taking input from the user
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    // Calculating the sum of array elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Displaying the sum of the array elements 
    cout << "Sum of the array elements is : " << sum << endl;

    return 0;
}