#include <iostream>
#include <fstream>
using namespace std;

int linearsearch(int a[], int value){
	for (int i = 0; i < 15; i++) {
		if (a[i] == value){
			return i;
		}
	}
	return -1;
}

void lastnumber(int a[]){
	for (int i = 0; i < 15; i++){
		if ((a[i] % 2 != 1) && (i = 14)){
			cout << "The last even number is at element " << i << endl;
		}
		else{
			cout << "no even number" << endl;
		}
	}
}

int main(){

	int arraysize = 15;
	int a[15];
	int key;
	int z;
	int i = 0;

	ifstream myfile("prog1_input.txt");

	while (!myfile.eof() && i < arraysize){
		myfile >> a[i];
		i++;
	}

	cout << "Please enter a value to search: ";
	cin >> key;


	z = linearsearch(a, key);

	if (z != -1){
		cout << "The Value " << key << " is found at element " << z << endl;
	}
	else
	{
		cout << "Value is not found" << endl;
	}
	cout << "\n";
	lastnumber(a);

	return 0;
}