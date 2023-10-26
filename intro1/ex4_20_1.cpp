#include <iostream>

double takeval(){
    double a{};
    std::cout<<"Enter a double value: ";
    std::cin>>a;
    return a;
}

char takeop(){
    char a{};
    std::cout<<"Enter one of the following: +, -, *, or /: ";
    std::cin>>a;
    return a;
}

void perform(double a,double b,char op){

    if (op == '+'){std::cout<<a<<" + "<<b<<" is "<<a+b;}
    if (op == '-'){std::cout<<a<<" - "<<b<<" is "<<a-b;}
    if (op == '*'){std::cout<<a<<" * "<<b<<" is "<<a*b;}
    if (op == '/'){std::cout<<a<<" / "<<b<<" is "<<a/b;}
    
}
int main(){
    double a{takeval()};
    double b{takeval()};
    char op{takeop()};
    perform(a,b,op);
}