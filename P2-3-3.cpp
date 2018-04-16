#include <iostream>
using namespace std;

void doubleNumber(int &num){num=num*2;}

int main(){
	int number=35;
	doubleNumber(number);
	std::cout<<number<<endl;//Should print 70
	return 0;
}