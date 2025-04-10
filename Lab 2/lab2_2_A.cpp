#include <iostream>

// Function for swapping (No pointers or references):
void swap(float a,float b){
    std::cout << b << " "<< a;
}

int main(){
    float a, b;
    std::cout<< "Enter two floating numbers: ";
    std::cin>> a >> b;
    swap(a,b); // Call the function

    return 0;
}