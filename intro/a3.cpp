#include<iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);
int main(){
    int bucky[3]={4,2,1};
    int jessica[6]={5,4,3,7,8,9};

    printArray(jessica, 6);
}

void printArray(int theArray[],int sizeOfArray){
    for (int x = 0; x < sizeOfArray; x++)
    {
        cout<<theArray[x]<<endl;
    }
    
}