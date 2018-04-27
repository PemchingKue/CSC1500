#include <iostream>
using namespace std;

int main(){

	int num;
	int summation = 0;
	int total;
	int gauss;

	cout << "Input a Number: ";
	cin >> num;

	for (int i = 0; i < num; i++){
		total = i + 1;
		summation += total;
	}

	cout <<"Using a loop, the result of the summation is: " << summation << endl;

	gauss = (num * (num + 1) / 2);

	cout << "Using Gauss's formula, the result of the summation is: " << gauss << endl;

	return 0;
}