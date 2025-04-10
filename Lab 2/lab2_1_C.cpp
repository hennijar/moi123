#include <iostream>
#include <math.h>

double multiply(int a, double b, bool flag){
    if(flag == false){
        return a*b;
    }
    else{
        return floor(a*b);
        
    }
}

int main(){
    
    std::cout<< multiply(2,5.6,false);
}