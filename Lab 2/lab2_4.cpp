/*Exercise 4: Write a program that asks the user for numbers continuously.
• If the user enters a negative number, the program stops (break).
• If the user enters zero, it skips processing (continue).
• Otherwise, it prints the square of the number.*/

#include <iostream>
#define SQUARE(x) ((x)*(x)) // Define the square as macro.

int main(){
    int number;
    
    while (true){ // Loop continuously
        std::cout<< "Enter a number:\n"; //Take number from user.
        std::cin>> number;
        
        if (number < 0){ // If the number is 0, program skips it and asks for a new number.
            break;
        }
        if (number == 0){ // If the number is zero, the program will stop.
            continue;
        }
        std::cout<< "The square of the number is: "<<SQUARE(number)<<"\n"; // Otherwise the program prints the square of the number.

    }
    return 0;
}