#include <iostream>
#include <cstdlib>
#include <iomanip>

int factorial(int num); 

int main()
{
	std::cout<<"Hello World\n"; 

	return 0; 
}

int factorial(int num)
{
	// Compute the factorial of a given number
	// limited to 30!

	if(num<0){
		return 0; 
	}
	else if (num == 0 || num == 1){
		return 1; 
	}
	else if(num == 2){
		return 2; 
	}
	else{
		return num * factorial(num-1); 
	}
}