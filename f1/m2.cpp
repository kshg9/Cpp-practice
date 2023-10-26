#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream buckysFile("bez.txt");
// if (buckysFile.is_open())
// {
//     /* code */
// }

    buckysFile<<"Hii"<<endl;
    buckysFile.close();
}