#include <iostream>

int multiply(int a, int b){ // Function for multiply.
    return a*b;
}


int main(){
    int a; 
    int b;
    // Take the user input.
    std::cout<< "Enter two integer values:\n";
    std::cin>> a >> b;
    std::cout << "Result: " << multiply(a, b); // Call the function.

}