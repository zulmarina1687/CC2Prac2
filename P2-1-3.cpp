#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
	srand(time(0));
	int randNum=rand();
	std::cout<<"A random number: "<<randNum;
	return 0;	
}