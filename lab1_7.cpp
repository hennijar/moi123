#include <iostream>
#include <cctype>
#include <string>
#define MIN_LENGTH 8 // Macro for defining the minimum length of password.

bool checkpassword(std::string password){ // Function for checking the password requirements.
    int upperChars = 0, lowerChars = 0, specialChars = 0, digits = 0, length = 0;
    length = password.length();

    if(length < MIN_LENGTH){ // Verifying the required length.
        std::cout<<"The minimum required length for password is 8 characters.\n ";
        return false; // Exit function if password is too short.
    }

    // Iterate trought each character in password.
        for(char ch : password){
            if (isupper(ch)){
                upperChars++;
            } 
            else if (islower(ch)){
                lowerChars++;
            }
            else if (isdigit(ch)){
                digits++;
            }
            else {
                specialChars++;
            }

        }

        
        // Error messages if any of the requirements is missing.
        if (upperChars == 0){
        std::cout << "Password must contain at least one uppercase character.\n";
        return false;
        }
        if (lowerChars == 0){
        std::cout << "Password must contain at least one lowercase character.\n";
        return false;
        }
        if (specialChars == 0){
        std::cout << "Password must contain at least one special character\n";
        return false;
        }
        if (digits == 0){
        std::cout << "Password must contain at least one digit.\n";
        return false;
        }
     
    

        std::cout << "Strong password.\n"; // Password is valid if all requirements are filled.
        return true;
}

int main(){ // Main program for taking the password as user input. The program is looping until the password is strong enough.
    std::string password;

    while(true){
        std::cout << "Enter a password ";
        std::getline(std::cin, password);

        if (checkpassword(password)){
            break; // Break if the password is valid.
        } 
        std::cout << "Weak password. Please try again.\n";
    }
    
    return 0;
}

