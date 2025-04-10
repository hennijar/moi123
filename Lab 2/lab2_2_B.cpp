#include <iostream>

// Function (Using pointers):
void swapUsingPointers(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    std::cout<< "Enter two numbers: ";
    std::cin>> a >> b;

    swapUsingPointers(&a, &b); // Call the function
    std::cout << a << " " << b;
}