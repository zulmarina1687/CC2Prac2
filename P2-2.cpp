#include <iostream>
using namespace std;
void f(const int a=5){
	std::cout <<a*2<<"\n";
}

int a=123;

int main(){
	f(1);
	f(a);
	int b=3;
	f(b);
	int a=4;
	f(a);
	f();
}