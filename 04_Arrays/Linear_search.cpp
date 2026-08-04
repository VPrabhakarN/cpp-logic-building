// C++ program to perform Linear Search in an array.

#include <iostream>
using namespace std;

int main() {
    // Taking the size of an array from the user
    int size;

    cout << "Enter the size of an array : ";
    cin >> size;

    // Initializing an array from the given size
    int arr[size];

    // Taking input from the user for array elements
    for (int i=0; i<size; i++) {
        cout << "Enter Element : " << i + 1 << " : ";
        cin >> arr[i];
    }

    // Asking the user to enter the element to be searched
    int searchElement;
    cout << "Enter the element to be searched : ";
    cin >> searchElement;

    // Performing linear search in the array
    int index; 
    bool found = false; // Flag to check if the element is found
    for (int i=0; i<size; i++) {
        if (arr[i] == searchElement) {
            found = true; // Element found
            index = i; // Storing the index of the found element
            break;
        }
    }

    // Displaying the result of the search
    if(found) {
        cout << "Element " << searchElement << " found at index : " << index << endl;
    } else {
        cout << "Element " << searchElement << " not found in the array." << endl;
    }

    return 0;
}