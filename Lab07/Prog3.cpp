#include <iostream>
#include <fstream>
using namespace std;

int selectionSort(int list[], int length){

	int bigIndex;
	int location;
	int temp;
	int count = 0;

	for (int i = 0; i < length; i++){
		bigIndex = i;
		for (location = i + 1; location < length; location++){
			if (list[location] > list[bigIndex]){
				bigIndex = location;
			}
			count++;
		}
		temp = list[bigIndex];
		list[bigIndex] = list[i];
		list[i] = temp;
	}
	return count;
}

int main(){

	int arraysize = 10;
	int a[10];
	int i = 0;
	int count;

	ifstream infile("prog3_input.txt");

	while (!infile.eof() && i < arraysize){
		infile >> a[i];
		i++;
	}

	ofstream outfile("prog3_output.txt");

	count = selectionSort(a, 10);

	cout << "The number of comparisons are: " << count << endl;

	for (int i = 0; i < arraysize; i++){
		outfile << a[i] << endl;
	}

	return 0;
}