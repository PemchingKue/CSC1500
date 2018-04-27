#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string hex_digit(int x){
	if (x < 10 && x >= 0){
		return to_string(x);
	}
	else if(x == 10){
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

	while (n >= 0){
		string output = "";

		cout << "Enter a number or enter -1 to stop:";
		cin >> n;
			while (n >= 16){
				r = n % 16;
				output = hex_digit(r) + output;
				n = (n - r) / 16;
			}
		if (n > 0){
			output = hex_digit(n) + output;
			cout << "Hexadecimal: " << output << endl;
		}
	}

	return 0;
}