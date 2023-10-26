#include <iostream>

int main(){
    #ifdef PRINT_BOB
    std::cout<<"Bob\n";
    #endif
    
    #if !defined(PRINT_CAT)
    std::cout<<"Cat\n";
    #endif
}