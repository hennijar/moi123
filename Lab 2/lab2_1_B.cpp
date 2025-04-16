#include <iostream>
#include <math.h>

// Function for integers (A):
int multiply(int a, int b){ 
    return a*b;
}

// Function for doubles (B):
double multiply(double c, double d){
    return c*d;
}

// Function for integer, double and flag (C):
double multiply(int a, double b, bool flag){
    if(flag == false){
        return a*b;
    }
    else{
        return floor(a*b);
        
    }
}


int main(){

    // Call functions and print the results:
    std::cout<< multiply(2, 5)<<"\n";
    std::cout<< multiply(2.5,6.7)<< "\n";
    std::cout<< multiply(2,6.7,true);
}
