#include <iostream>

int main(){
    int input;
    std::cout << "Enter an integer value: ";
    std::cin >> input; // Take integer value from user.

    int sum = 0;

    // Iterate trough the user input and calculate sum of digits.
    for (; input > 0; input /= 10) { 
        sum += input % 10;  
    }   
    std::cout << sum; // Print the result.

    return 0; 
    }
    
