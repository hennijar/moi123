/*Exercise 3: Create a simple calculator using switch. The user enters two numbers and an
operator (+, -, *, /). The program performs the calculation.
Like:
• user input1: value 1 (value1 can be int or float)
• user input2: value 2 (value2 can be int or float)
• user input3: + Note that “+” can be a character input
Then the calculator should provide the final results*/

#include <iostream>

// Functions for different operators.
float add(float value1, float value2){
    return value1 + value2;
}

float substraction(float value1, float value2){
    return value1 - value2;
}

float multiply(float value1, float value2){
    return value1 * value2;
}

float division(float value1, float value2){
    if (value2 == 0){ // Check that the value2 is not zero.
        std::cout<< "Invalid value. Can't divide by zero.\n";
    }
    else{
        return value1 / value2;
    } 
}

int main(){
    float value1, value2;
    char op;
    std::cout<<"Enter value 1:\n"; // Take the values from user.
    std::cin>> value1;
    std::cout<< "Enter value 2:\n";
    std::cin>> value2;
    std::cout<< "Enter operator:\n";
    std::cin>> op;

    switch (op) // Switch for choosing the right operator.
    {
    case '+':
        std::cout<< "The result is: "<<add(value1, value2);
        break;
    case '-':
        std::cout<< "The result is: "<<substraction(value1, value2);
        break;
    case '*':
        std::cout<< "The result is: "<<multiply(value1, value2);
        break;
    
    case '/':
        std::cout<< "The result is: "<<division(value1, value2);
        break;
    }
}