#include <iostream>
using namespace std;

void printA(int a[], int arraysize){

	for (int i = 2; i < arraysize; i++){
		cout << a[i] << "\t";
	}
	cout << endl;
}

int main(){
	int n;
	int a[100];

	cout << "Eratosthenes sieve" << endl;
	cout << "Enter n: ";
	cin >> n;

	for (int i = 0; i < n; i++){
		a[i] = i;
	}
	printA(a, n);

	for (int i = 2; i < n; i++){
		if (a[i] > 0){
			for (int j = 2; (i * j) < n; j++){
				a[i * j] = 0;
			}
			printA(a, n);
		}
	}

	return 0;
}