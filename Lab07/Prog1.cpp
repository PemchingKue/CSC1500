#include <iostream>
using namespace std;
#include <fstream>

int main(){

	int arraysize = 10;
	int a[10];
	int i = 0;
	int range;
	int total = 0;
	int total1 = 0;
	int comparison;

	ifstream myfile("prog1_input.txt");

	while (!myfile.eof() && i < arraysize){
		myfile >> a[i];
		i++;
	}

	int max = a[0];
	for (int i = 0; i < 10; i++){

		if (a[i] > max){
			max = a[i];
		}
		total++;
	}

	int min = a[0];
	for (int i = 0; i < 10; i++){

		if (a[i] < min){
			min = a[i];
		}
		total1++;
	}

	range = max - min;
	comparison = total + total1;

	cout << "The range is " << max << " - " << min << " = " << range << endl;
	cout << "This program did " << comparison - 2 << " comparisons." << endl;

	return 0;
}