#include <iostream>
using namespace std;

void swap(char arr[], int i, int j){
	char temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void permutation(char a[], int lIndex, int rIndex){
	int i = 0;
	if (lIndex == rIndex){
		cout << a << endl;
	}
	else{
		for (i = lIndex; i <= rIndex; i++){
			swap(a, lIndex, i);
			permutation(a, lIndex + 1, rIndex);
			swap(a, lIndex, i);
		}
	}
}

int main(){

	char a[] = "ABC";
	int n = strlen(a);
	cout << "The Input of the string is: ABC" << endl;
	permutation(a, 0, n-1);

	

	return 0;
}