#include <iostream>
#include <string>

namespace MathOperations { // Function for adding a and b user inputs together.
    int add(int a, int b){
        return a+b; // Return to main program.
    }
}

namespace TextOperations{ // Function for adding the user input words together.
    std::string concat(std::string first_word, std::string second_word){
        return first_word + second_word; // Return to main program.
    }
}

int main(){
    int a, b;
    std::string first_word, second_word;
    std::cout << "Enter two intgers: \n"; // Take a and b from user.
    std::cin >> a>> b;
    std::cout << "Enter two strings: \n"; // Take two strings from user.
    std::cin >> first_word >> second_word;
    int c = MathOperations::add(a, b); // Call the function for returning the final value.
    std::string third_word = TextOperations::concat(first_word, second_word);
    std::cout << "Sum: " << c << "\n"; // Print results to user.
    std::cout << "Concatenated string: " << third_word;
}