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

int gcd2(int a, int b){
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
	int p;
	int gcdvalue;
	int gcdvalue2;

	cout << "Sample input numbers: ";
	cin >> n >> m >> p;

	gcdvalue = gcd(n, m);
	gcdvalue2 = gcd2(gcdvalue, p);

	if (gcdvalue2 == 1){
		cout << "Yes, gcd(" << n << ", " << m << ", " << p << ") = " << gcdvalue2 << endl;
	}
	else{
		cout << "No, gcd(" << n << ", " << m << ", " << p << ") = " << gcdvalue2 << endl;
	}

	return 0;
}