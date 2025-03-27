#include <iostream>

int main(){
    int input;
    std::cout << "Enter an integer value: ";
    std::cin >> input;

    int sum = 0;

    for (; input > 0; input /= 10) { 
        sum += input % 10;  
    }   
    std::cout << sum;

    return 0; 
    }
    
