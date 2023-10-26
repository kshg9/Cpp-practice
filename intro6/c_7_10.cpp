#include <iostream>

void activator(int a){
 for (int i = 0; i <= a; i++)
 {
    bool check{};
    if (i%3==0) {std::cout<<"fizz"; check=1;}
    if (i%5==0) {std::cout<<"buzz"; check=1;}
    if (i%7==0) {std::cout<<"pop"; check=1;}
    if (!check) {std::cout<<i;}
    std::cout<<'\n';
 }
 
}
int main(){
    activator(150);
}