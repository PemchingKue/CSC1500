#include <iostream>
#include <fstream>
using namespace std;

int bubblesort(int a[], int arraysize){
	int temp = 0;
	int count = 0;

	for (int i = 1; i < arraysize; i++) {
		for (int j = 0; j < arraysize - 1; j++) {
			if (a[j] < a[j + 1]){
				a[temp] = a[j];
				a[j] = a[j + 1];
				a[j + 1] = a[temp];
			}
		count++;
		}
	}
	return count;
}


int main(){

	int arraysize = 10;
	int a[10];
	int i = 0;
	int count;

	ifstream infile("prog2_input.txt");

	while (!infile.eof() && i < arraysize){
		infile >> a[i];
		i++;
	}

	ofstream outfile("prog2_output.txt");

	count = bubblesort(a, 10);

	cout << "The number of comparisons are: " << count << endl;

	for (int i = 0; i < arraysize; i++){
		outfile << a[i] << endl;
	}

	return 0;
}