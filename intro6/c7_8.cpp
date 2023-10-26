#include <iostream>
using std::cout;

int main(){
    char ch{'a'};
    while (ch <= 'z')
    {
        cout<<static_cast<int>(ch)<<' ';
        ch++;
    }
}