#include <iostream>
#include<string>
using namespace std;

class BuckysClass{
    public:
        BuckysClass(string z){
            setName(z);
        }
        void setName(string x){
            name =x;
        } 
        string getName(){
            return name;
        }
    private:
        string name;
};
// class BuckysClass{
//     public:
//         BuckysClass(string z){
//             setName(z);
//         }
//         void setName(string x){
//             name =x;
//         } 
//         string getName(){
//             return name;
//         }
//         string name; // Bad practice, usually put variables in private
//     private:
// };

int main(){
    BuckysClass bo("Lucky bucky roberts");
    cout<<bo.getName();
    return 0;
}