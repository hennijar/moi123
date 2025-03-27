#include <iostream>
#include <string>

namespace MathOperations {
    int add(int a, int b){
        return a+b;
    }
}

namespace TextOperations{
    std::string concat(std::string first_word, std::string second_word){
        return first_word + second_word;
    }
}

int main(){
    int a, b;
    std::string first_word, second_word;
    std::cout << "Enter two intgers: \n";
    std::cin >> a>> b;
    std::cout << "Enter two strings: \n";
    std::cin >> first_word >> second_word;
    int c = MathOperations::add(a, b);
    std::string third_word = TextOperations::concat(first_word, second_word);
    std::cout << "Sum: " << c << "\n";
    std::cout << "Concatenated string: " << third_word;
}