#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string one("apples ");
    string two("beans ");

    cout<<one <<two<<endl;
    one.swap(two);
    cout<<one<<two<<endl;
}