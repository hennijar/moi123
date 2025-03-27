#include <iostream>

#define MAX_VALUE 50

int main(){
    for (size_t i = 2; i <= MAX_VALUE; i += 2){
        std::cout << i << " ";
    }
    return 0;
}