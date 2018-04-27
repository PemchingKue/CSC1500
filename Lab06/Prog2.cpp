#include <iostream>
#include <fstream>
using namespace std;

int binary_search(int a[], int l, int r, int v) {

	if (r < l) {
		return -1;
	}
	
	int m = l + (r - l) / 2;

	if (a[m] == v) {
		return m;
	}
	if (a[m] > v)
	{
		return binary_search(a, l, m - 1, v);
	}
	else {
		return binary_search(a, m + 1, r, v);
	}
}

int main(){

	int arraysize = 15;
	int a[15];
	int key;
	int z;
	int i = 0;

	ifstream myfile("prog2_input.txt");

	while (!myfile.eof() && i < arraysize){
		myfile >> a[i];
		i++;
	}

	cout << "Please enter a value to search: ";
	cin >> key;

	z = binary_search(a, 1, 15, key);

	if (z != -1){
		cout << "The Value " << key << " is found at element " << binary_search(a, 1, 15, key) << endl;
	}
	else
	{
		cout << "Value is not found" << endl;
	}

	return 0;
}