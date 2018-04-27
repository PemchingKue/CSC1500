#include <iostream>
using namespace std;

int gcd(int a, int b){
	int r;

	if (a < b){
		r = b;
		b = a;
		a = r;
	}
	while (b > 0){
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){

	int n;
	int m;
	int gcdvalue;
	long int lcmvalue;

	cout << "Euclid's algorithm" << endl;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter m: ";
	cin >> m;

	gcdvalue = gcd(n, m);
	cout << "gcd(" << n << ", " << m << ") = " << gcdvalue << endl;

	lcmvalue = (m * n / gcdvalue);
	cout << "lcm(" << n << ", " << m << ") = " << lcmvalue << endl;

	return 0;
}