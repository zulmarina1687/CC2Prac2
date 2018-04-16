#include <iostream>
#include <cstdlib>
#include <ctime>

void setstring(char **strPtr){
	int x;
	cin>>x;
	if(x<0)
		*strPtr="Negative!";
	else
		*strPtr="Nonnegative!";
}
void *getRandNumPtr(){
	int x=rand();
	return &x;
}
int main(){
	char *str;
	setString(&str);
	cout<<str;//String has been set by setString
	return 0;	
}