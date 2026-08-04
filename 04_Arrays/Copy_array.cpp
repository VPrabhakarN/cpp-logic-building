// C++ program to copy one array to another array.

#include <iostream>
using namespace std;

int main() {
    // Taking the size of an array from the user
    int size;

    cout << "Enter the size of an array : ";
    cin >> size;

    // Initializing the array from the given size
    int arr[size], copyarr[size];

    // Taking input from the user for the array elements
    for (int i=0; i<size; i++) {
        cout << "Enter Element : " << i + 1 << " : ";
        cin >> arr[i];
    }

    // Copying all elements of the first array to the second array
    for (int i=0; i<size; i++) {
        copyarr[i] = arr[i];
    }

    // Displaying the original array
    cout << "Original Array : " ;
    for (int i=0; i<size; i++) {
        cout << arr[i] << " \t";
    }

    cout << endl;

    // Displaying the copied array
    cout << "Copied Array   : " ;
    for (int i=0; i<size; i++) {
        cout << copyarr[i] << " \t";
    }

    return 0;
}