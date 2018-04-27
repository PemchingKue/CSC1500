#include <iostream>
#include <fstream>
using namespace std;

void selectionSort(int list[], int length){

	int location;
	int location2;
	
	for (int a = 0; a < length; a++){

		for (int i = 0; i < length; i++){
			location2 = i;
			for (location = i + 1; location < length; location++){
				if (list[location] == list[location2]){
					list[location] = list[location] + 1;
					if (list[location] == 10){
						list[location] = 0;
					}
				}
			}
		}
	}

}

int main(){

	int arraysize = 10;
	int a[10];
	int i = 0;
	int r;

	ifstream myfile("prog4_input.txt");

	while (!myfile.eof() && i < arraysize){
		myfile >> a[i];
		i++;
	}

	for (int i = 0; i < 10; i++){
		r = a[i] % 10;
		a[i] = r;
	}

	ofstream outfile("prog4_output.txt");

	selectionSort(a, 10);

	for (int i = 0; i < arraysize; i++){
		outfile << a[i] << endl;
	}

	return 0;

}