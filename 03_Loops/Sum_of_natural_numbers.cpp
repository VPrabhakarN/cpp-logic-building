// C++ program to print sume of natural numbers from 1 to N.

#include <iostream>
using namespace std;

int main() {
    // Taking an input from the user for the value of N
    int N;

    cout << "Enter a natural number N : ";
    cin >> N;

    // Using a for loop to calculate the sum of natural numbers from 1 to N.
    int sum = 0;
    for(int i=1; i<=N; i++){
        // Adding the number to the sum variable.
        sum += i;
    }

    // Displaying the result of the sum to the console.
    cout << "The sum of natural numbers from 1 to " << N << " is : " << sum << endl;

    return 0;
}