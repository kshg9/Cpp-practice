#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    for(int x=1; x<25; x++){
        cout<<1+ rand()%6<<endl;// random no from 1 to 6
    }
}