#include <iostream>

int sumDigits(int x) {
    if (x < 10) return x;
    return sumDigits(x/10)+x%10;
}

int main(){
    std::cout<<sumDigits(945)<<'\n';
}