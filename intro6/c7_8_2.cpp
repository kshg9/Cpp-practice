#include <iostream>

int main(){
    int outer{1};
    while (outer<=5)
    {
        int inner{outer};
        int spinner{5-inner};

        while (spinner > 0)
        {
            std::cout<<' '<<' ';
            spinner--;
        }
        
        while (inner>=1)
        {
            std::cout<<inner<<' ';
            inner--;
        }
        outer++;
        std::cout<<std::endl;
    }
    
}