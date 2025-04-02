#include <iostream>

#define SQUARE(X) ((X) * (X)) // Macro for square.

int main(){
    int input; 
    std::cout << "Enter an integer, please: ";
    std::cin >> input;
    int result = SQUARE(input); 

    // Print the square of user input.
    std::cout <<"The square of "<< input << " is " << result << ".";
    
    return 0;
}