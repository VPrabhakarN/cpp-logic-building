// C++ program to calculate the sum of even and odd numbers seperately from 1 to N.

#include <iostream>
using namespace std;

int main() {
    // Taking an input from the user for the value of N
    int N;

    cout << "Enter a natural number N : ";
    cin >> N;

    // Initializing variables to store the sum of even and odd numbers
    int sumEven = 0;
    int sumOdd = 0;

    // Using a for loop to iterate through numbers from 1 to N.
    for(int i=0; i<=N; i++){
        // Checking if the number is even by using the modulus operator.
        if(i%2 == 0){
            // Adding the even number to the sumEven variable.
            sumEven += i;
        } 
        else {
            // Adding the odd number to the sumOdd variable.
            sumOdd += i;
        }
    }

    // Displaying the result of the sums to the console.
    cout << "The sum of even numbers from 1 to " << N << " is : " << sumEven << endl;
    cout << "The sum of odd numbers from 1 to " << N << " is : " << sumOdd << endl;

    return 0;
}