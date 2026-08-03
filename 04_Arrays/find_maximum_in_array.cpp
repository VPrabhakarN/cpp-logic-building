// C++ program to find the maximum element in an array.

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
    for(int i = 0; i < size; i++) {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    // Finding the maximum element in the array
    int max = arr[0]; // Assuming the first element is the maximum
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }

    // Displaying the maximum element in the array
    cout << "Maximum element in the array is : " << max << endl;

    return 0;
}