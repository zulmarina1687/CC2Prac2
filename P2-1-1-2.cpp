#include <iostream>
using namespace std;

void print(const int n){
		cout<<n<<endl;
}

void print1(const long &x){
		cout<<x<<endl;
}

int main(){
	long x=234923592;
	print(x);
	print1(x);
	return 0;
}