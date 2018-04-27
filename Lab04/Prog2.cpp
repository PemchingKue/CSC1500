#include <iostream>
#include <cmath>
using namespace std;

#define SIZE 50

void first(int num){
	
	int a[SIZE];
	int test;
	int sum = 0;

	for (int i = 0; i <= num; i++){
		a[i] = (-1 + (2 * i));
	}

	for (int i = 0; i < num; i++){
		test = (-1 + (2 * i));
		sum += test;
	}

	cout <<"The value of the "<< num << " element is " << a[num - 1] <<" and the summation is " << sum << endl;
}

void second(int num){
	
	int b[SIZE];
	int test;
	int sum = 0;

	for (int i = 1; i <= num; i++){
		b[i] = pow(i, 2);
	}

	for (int i = 1; i <= num; i++){
		test = pow(i , 2);
		sum += test;
	}

	cout << "The value of the " << num << " element is " << b[num] << " and the summation is " << sum << endl;
}

int main(){

	int input;
	
	cout << "Input a Number: ";
	cin >> input;

	first(input);
	cout << "\n";
	second(input);
	cout << "\n";

	return 0;
}