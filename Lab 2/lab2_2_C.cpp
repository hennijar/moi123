#include <iostream>

// Function (Using references):
void swapUsingReferences(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}

int main(){

    int a, b;
    std::cout<< "Enter two values: ";
    std::cin>>a >> b;
    swapUsingReferences(a, b); // Call the function.
    std::cout<< a <<" "<< b;

}
