/*Exercise 8:
Assign an int variable to a reference and 
modify the reference.
For instance
int a = 100;
int& refA = a; // Reference to a
refA = 30; // Modifying refA modifies a
What happens to variable a when you change refA
*/

#include <iostream>

int main(){
    int a = 100;
    int& refA = a; // Reference to a.

    refA = 600; // Modify refA.

    std::cout<< "a: "<< a <<"\n";
    std::cout<< "refA: " << refA << "\n";
}