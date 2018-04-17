#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void *getRandNumPtr(){
	int x=rand();
	return &x;
}
int main(){
	int *randNumPtr=getRandNumPtr();
	cout<<*randNumPtr;//ERROR
	return 0;	
}