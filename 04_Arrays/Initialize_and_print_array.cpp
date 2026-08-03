// C++ program to Initialize and Print Array.

#include <iostream>
using namespace std;

int main() {
    // Taking sizze of an array from the user
    int size ;
    cout << "Enter size of an array : ";
    cin >> size;

    // Initializing an array from the given size
    int arr[size];

    // Taking input from the user 
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    // Displaying the elements of the array
    cout << "Elements of the array are : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}