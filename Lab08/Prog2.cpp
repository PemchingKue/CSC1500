#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string hex_digit(int x){
	if (x < 10 && x >= 0){
		return to_string(x);
	}
	else if (x == 10){
		return "A";
	}
	else if (x == 11){
		return "B";
	}
	else if (x == 12){
		return "C";
	}
	else if (x == 13){
		return "D";
	}
	else if (x == 14){
		return "E";
	}
	else if (x == 15){
		return "F";
	}
	else{
		return "Error";
	}
}

int main(){

	int n = 0;
	int r;
	int n2;

	while (n >= 0){
		string output = "";

		cout << "Enter a number or enter -1 to stop:";
		cin >> n;
		n2 = n;

		while (n >= 2){
			r = n % 2;
			output = hex_digit(r) + output;
			n = (n - r) / 2;
		}

		if (n > 0){
			output = hex_digit(n) + output;
			cout << "Binary: " << output << endl;
		}

		string output2 = "";

		while (n2 >= 8){
			r = n2 % 8;
			output2 = hex_digit(r) + output2;
			n2 = (n2 - r) / 8;
		}

		if (n2 > 0){
			output2 = hex_digit(n2) + output2;
			cout << "Octal: " << output2 << endl;
		}
	}
	return 0;
}

