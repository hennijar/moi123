/*Exercise 5: Write a program that creates an array and uses a pointer to
 traverse it and store it in
another array and then printing each element in the new array
For example: the array 1 has value = 1 , 4, 7, 10 , 15. Then the
 array must have 15 , 10 , 7 , 4 , 1*/

#include <iostream>

int main(){
    int numbers[100]; // Original array
    int new_array[100]; // Array for reversed numbers
    int tot; // Total number of elements
    int i; // Loop counter
    int *ptr; // Pointer to traverse the array

    // Ask user for the array size.
    std::cout<< "Enter the size of array:\n";
    std::cin>> tot;

    // Ask user to enter elements for the array.
    std::cout<< "Enter "<< tot << " array elements: \n";
    for (i=0; i<tot; i++){
        std::cin>> numbers[i]; // Store user inputs to original array.
    }

    // Pointer for pointing to the beginning of the original array.
    ptr = numbers;

    // Use pointer to traverse the array and copy elements to a new array in reverse order.
    for (i=0; i<tot; i++){
        new_array[tot - 1 - i] = *(ptr + i);
 
    }

    // Print the reversed array.
    std::cout<< "Reversed array:\n";
    for (i=0; i<tot; i++){
        std::cout<< new_array[i] << " ";
    }
    return 0;
}