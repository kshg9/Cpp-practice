#include <iostream>
using namespace std;

int main(){
    // int bucky[5]={66,75,2,43,99};
    // cout<<bucky[4]<<endl;
    
    int bucky[9];
    cout<<"Element- Value"<<endl;

    for(int x=0;x<=8;x++){
        bucky[x]=99;
        cout<<x<<" ----------- "<<bucky[x]<<endl;
    }
}