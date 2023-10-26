#include <iostream>


double getTowerHeight(){
    std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}
double calculateHeight(double towerHeight,int seconds){
    constexpr double gravity{9.8};
    const double currentHeight{towerHeight-(gravity*(seconds*seconds)/2)}
    return currentHeight;
}
void printHeight(double height, int seconds){
    if (height>0.0){ std::cout<<"At "<<seconds<< " seconds, the ball is at height: " << height << " meters\n";}
    else{ std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";}
}
void calculateAndPrintHeight(double towerHeight, int seconds){
    const double height{calculateHeight(towerHeight,seconds)};
    printHeight(height,seconds);
}

int main(){
    
	const double towerHeight{ getTowerHeight() };

	calculateAndPrintHeight(towerHeight, 0);
	calculateAndPrintHeight(towerHeight, 1);
	calculateAndPrintHeight(towerHeight, 2);
	calculateAndPrintHeight(towerHeight, 3);
	calculateAndPrintHeight(towerHeight, 4);
	calculateAndPrintHeight(towerHeight, 5);
}