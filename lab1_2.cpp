#include <iostream>
#include <string>

int main(){
    std::string user_input;
    std::cout << "Enter a string input: \n"; // Take string input from user.
    std::cin >> user_input;

    for (char &ch : user_input) { 
        ch = std::toupper(ch);  // Convert each character to uppercase
    }

    
    int vowels = 0;

    // Iterate trough the user input and count the vowels.
    for (char ch : user_input){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vowels++;
        }
    }

    // Reverse the user input.
    for (int i = user_input.length() -1; i >=0 ; i--){
        std::cout << user_input[i];
    }
    std::cout << "\n";


    
    std::cout << "Total vowels: " << vowels;

    return 0;
}