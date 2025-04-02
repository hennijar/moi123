#include <iostream>

#define MAX_VALUE 50 // Macro for max value.

int main(){ // Iterate and print all even numbers from 1 to 50.
    for (size_t i = 2; i <= MAX_VALUE; i += 2){
        std::cout << i << " ";
    }
    return 0;
}