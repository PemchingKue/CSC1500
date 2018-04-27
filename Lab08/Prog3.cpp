#include <iostream>
#include <fstream>
using namespace std;

int main(){

	int arraysize = 5;
	int a[5];
	int i = 0;
	int z;
	int b;
	int c;
	int d;
	int e;

	ifstream myfile("prog3_input.txt");

	while (!myfile.eof() && i < arraysize){
		myfile >> a[i];
		i++;
	}

	ofstream outfile("prog3_output.txt");

	z = (a[0] - 6) % 13;
	b = (a[1] - 6) % 13;
	c = (a[2] - 6) % 13;
	d = (a[3] - 6) % 13;
	e = (a[4] - 6) % 13;

	//z
	if (z == 0){
		outfile << a[0] << ": Yes" << endl;
	}
	else{
		outfile << a[0] << ": No. " << a[0] << " - 6 = " << a[0] - 6 << " is not divisible by 13" << endl;
	}
	//b
	if (b == 0){
		outfile << a[1] << ": Yes" << endl;
	}
	else{
		outfile << a[1] << ": No. " << a[1] << " - 6 = " << a[1] - 6 << " is not divisible by 13" << endl;
	}
	//c
	if (c == 0){
		outfile << a[2] << ": Yes" << endl;
	}
	else{
		outfile << a[2] << ": No. " << a[2] << " - 6 = " << a[2] - 6 << " is not divisible by 13" << endl;
	}
	//d
	if (d == 0){
		outfile << a[3] << ": Yes" << endl;
	}
	else{
		outfile << a[3] << ": No. " << a[3] << " - 6 = " << a[3] - 6 << " is not divisible by 13" << endl;
	}
	//e
	if (e == 0){
		outfile << a[4] << ": Yes" << endl;
	}
	else{
		outfile << a[4] << ": No. " << a[4] << " - 6 = " << a[4] - 6 << " is not divisible by 13" << endl;
	}

	return 0;
}