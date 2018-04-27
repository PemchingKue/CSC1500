#include <iostream>
using namespace std;

int fib(int n){

	if (n == 0){
		return 0;
	}
	else if (n == 1){
		return 1;
	}
	else{
		return fib(n - 1) + fib(n - 2);
	}

}

int ifib(int n)
{
	int a = 1;
	int b = 1;

	for (int i = 3; i <= n; i++) {
		int c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main(){

	int n;

	cout << "Please enter a number: ";
	cin >> n;
	cout << "Iterative algorithm" << endl;
	for (int i = 1; i <= n; i++){
		cout << ifib(i) << " ";
	}
	cout << endl;

	cout << "Recursive algorithm" << endl;
	for (int i = 1; i <= n; i++){
		cout << fib(i) << " ";
	}
	cout << endl;

	return 0;
}