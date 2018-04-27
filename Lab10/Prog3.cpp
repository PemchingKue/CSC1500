#include <iostream>
using namespace std;

int mpower(int a, int b, int c){

	if (b == 0){
		return 1;
	}
	else if (b % 2 == 0){
		return (mpower(a, b / 2, c) * mpower(a, b / 2, c)) % c;
	}
	else{
		return ((a % c) * mpower( a, b - 1, c)) % c;
	}
}

int main(){
	int a;
	int b;
	int c;

	cout << "Enter three numbers: ";
	cin >> a >> b >> c;
	
	cout << "The results are: " << mpower(a, b, c) << endl;
	
	return 0;
}