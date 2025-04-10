/*Exercise 7: Create two pointers pointing to the same memory address (shallow copy).
For instance:
int x = 100;
int* p1 = &x; // Pointer 1 points to x
int* p2 = p1; // Pointer 2 copies address (shallow copy)
Modify the value using one pointer and observe the effect on the other.*/

#include <iostream>

int main(){
int x = 100;

int* p1 = &x; // Pointer 1 points to x.
int* p2 = p1; // Pointer 2 copies address.

std::cout << "Value of x: "<< x <<"\n";
std::cout << "Address of x: "<< &x <<"\n";
std::cout << "Address of x: "<< p1 << "\n";
std::cout << "Shallow copy of p1 " <<p2 << "\n";

*p1 = 300; // Modify value trough pointer p1.
std::cout << "New value of x: "<<x <<"\n";
std::cout << "The value stored in p2: "<<*p2;

return 0;
}