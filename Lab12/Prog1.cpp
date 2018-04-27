#include <iostream>
#include "time.h"
using namespace std;

void normalize(double arr[]){
	double sum = 0;
	for (int i = 0; i < 6; i++){
		sum += arr[i];
	}
	for (int i = 0; i < 6; i++){
		arr[i] /= sum;
	}
}

void print(double arr[]){
	for (int i = 0; i < 6; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int fair_roll(){
	//srand((int)time(NULL));
	return rand() % 6 + 1;
}

int biased_roll(double arr[]){
	double arr2[6];

	for (int i = 0; i < 6; i++){
		arr2[i] += arr[i];
	}

	double one = arr2[0];
	double two = arr2[1];
	double three = arr2[2];
	double four = arr2[3];
	double five = arr2[4];
	double six = arr2[5];

	double r = 0;

	(double)rand() / RAND_MAX;

}

int main(){

	double probabilities[] = { 10, 20, 17, 15, 29, 67 };
	normalize(probabilities);
	long int trials = 100000;
	double computed_probabilities_fair[6] = { 0 };
	double computed_probabilities_biased[6] = { 0 };
	
	cout << "Fair roll results: " << endl;
	for (int i = 0; i < trials; i++){
		int r = fair_roll();
		computed_probabilities_fair[r - 1]++;
	}
	normalize(computed_probabilities_fair);
	print(computed_probabilities_fair);

	cout << "Biased roll results: " << endl;
	for (int i = 0; i < trials; i++){
		int r = biased_roll(probabilities);
		computed_probabilities_biased[r - 1]++;
	}
	normalize(computed_probabilities_biased);
	print(computed_probabilities_biased);
	
	cout << "Original probabilities: " << endl;
	print(probabilities);

	return 0;
}