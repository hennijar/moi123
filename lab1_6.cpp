#include <iostream>

int reverse(int number){ // Function for reversing the number.
    int reversed_number = 0;
    for(;number > 0; number /= 10){ // Loop for processing all the digits of the number. 
       reversed_number = reversed_number *10 + number % 10; // Extract the last digit and add it to reversed_number.

    }
    return reversed_number;
}

int main(){
    int number; // main program for taking the user input.
    std::cout<<"Enter a number: ";
    std::cin>> number;
    std::cout<< "The reversed number is "<<reverse(number); // Call the function for reversion process.

    return 0;
}