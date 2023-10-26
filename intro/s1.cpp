#include <iostream>

int main(){

    int age=21;

    switch(age){
        case 16:
            std::cout<<"hey you can drive now!"<<endl;
            break;
        case 18:
            std::cout<<"go buy some lotto tickets"<<endl;
            break;
        case 21:
            std::cout<<"sorry you get nothing"<<endl;
            break;
        default:
            std::cout<<"Huh?";
            break;
    }
    return 0;
}