// C++ program to print even numbers between 1-20

#include <iostream>
using namespace std;

int main() {
    // Using a for loop to iterate through numbers from 1 to 20.
    cout << "Even numbers between 1 and 20 are : " << endl;
    for(int i=1; i<=20; i++){
         // Checking if the number is even by using the modulus operator.
         if(i%2 == 0){
            // Printing the even number to the console.
            cout << i << endl;
         }
    }

    return 0;
}