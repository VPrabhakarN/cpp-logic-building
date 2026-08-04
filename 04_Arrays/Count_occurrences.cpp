// C++ program to count Occurrences in the array.

#include <iostream>
using namespace std;

int main() {
    // Taking the size of an array from the user
    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    // Initializing an array from the given size
    int arr[size];

    // Taking input from the user for array elements
    for (int i=0; i<size; i++){
        cout << "Enter Element : " << i + 1 << " : ";
        cin >> arr[i];
    }

    // Asing the user to enter the element to check the occurrences
    int searchElement;
    cout << "Enter the element to check the occurrences : ";
    cin >> searchElement;

    // Counting the occurrences of the element in the array 
    int count = 0; // Variable to store the count of occurrences
    for (int i=0; i< size; i++) {
        if (arr[i] == searchElement) {
            count++;
        }
    }

    // Displaying the result of the occurrences 
    cout << "Element " << searchElement << " occurs " << count << " times in the array" << endl;

    return 0;
}