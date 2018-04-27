#include <iostream>
using namespace std;

int rgcd(int a, int b){
	if (a == 0){
		return b;
	}
	else{
		return rgcd(b % a, a);
	}
}

int main(){

	int num1;
	int num2;

	cout << "Please enter two numbers: ";
	cin >> num1 >> num2;

	cout << "gcd(" << num1 << "," << num2 << ") = " << rgcd(num1, num2) << endl;

	return 0;
}