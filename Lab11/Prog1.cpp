#include <iostream>
using namespace std;

void reverseb(char b[]){
	char temp;
	for (int i = 0; i < 5; i++){
		temp = b[i];
		b[i] = b[9 - i];
		b[9 - i] = temp;
	}
}

void printb(char b[]){
	for (int i = 0; i < 11; i++){
		cout << b[i];
	}
	cout << endl;
}
void nextbitstring(char b[]){
	int i = 0;

	while (b[i] == '1'){
		b[i] = '0';
		i = i + 1;	
	}
	b[i] = '1';
}

int main(){

	char b[] = "1000100111";
	printb(b);
	reverseb(b);
	printb(b);
	nextbitstring(b);
	reverseb(b);
	printb(b);

	return 0;
}