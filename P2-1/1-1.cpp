#include <iostream>
using namespace std;

void printNTimes(char *msg,int n){
	for(int i=0;i<n;++i){
		cout<<msg<<endl;
	}
}

void printNTimes1(char *msg,int n=1){
	for(int i=0;i<n;++i){
		cout<<msg<<endl;
	}
}

void printNTimes2(char *msg=NULL, int n=1){
	for(int i=0;i<n;++i){
		cout<<msg<<endl;
	}
}

int main(){
	char msg[100]={"Ciencias de la Computacion"};
	printNTimes(&msg[0],3);
	printNTimes1(&msg[0]);
	printNTimes2();
	return 0;
}