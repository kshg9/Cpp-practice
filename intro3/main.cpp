#include <iostream>
using namespace std;

void stars(int n){
	for (int i = 0; i < n; i++)
	{
	cout<<"*";	
	}
}
void space(int n){
	for (int i = 0; i < n; i++)
	{
	cout<<" ";	
	}
}

int main(){
	int n{};
	int sp{0}; // n-total positions, sp-space positions, st-star positions
	cin>>n;
	int st {n};
	for (int i = 0; i < n; i++, sp++, st--)
	{
		space(sp);
		stars(st);
		cout<<endl;
	}
}