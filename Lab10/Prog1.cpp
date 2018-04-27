#include <iostream>
using namespace std;

int interative(int a){
	int result = a;

	for (int i = 1; i < a; i++){
		result = result * i;
	}
	return result;
}

int recursive(int a){
	if (a == 0){
		return 1;
	}
	else{
		return a * interative(a - 1);
	}
}
int main(){

	int num;
	int isum;
	int rsum;

	cout << "Please input a number:";
	cin >> num;
	cout << endl;

	cout << "Iterative algorithm" << endl;
	cout << num;
	for (int i = num - 1; i > 0; i--){
		cout << " * " << i;
	}
	cout << " = " << interative(num) << endl;

	cout << endl;

	cout << "Recursive algorithm" << endl;
	cout << num;
	for (int i = num - 1; i > 0; i--){
		cout << " * " << i;
	}
	cout << " = " << recursive(num) << endl;

	return 0;
}