#include <iostream>
using namespace std;


void Upper(int arr[][7])

{
	cout << "Upper-Triangular Matrix: " << endl;
	for (int i = 0; i < 7; i++)
	{
		cout<<"\n";
		for (int j = 0; j < 7; j++)
		{
			if (j >= i){
				cout << arr[i][j] << " ";
			}
			else{
				cout << "  ";
			}
		}
	}
	cout << "\n";
}

int main()

{
	int matrix[7][7] = { { 6, 7, 3, 3, 6, 4, 7 }, { 1, 1, 5, 4, 8, 3, 2 }, { 1, 1, 4, 2, 8, 9, 3 }, 
	{2, 2, 3, 0, 6, 7, 3 }, { 1, 1, 4, 5, 2, 9, 7 }, { 1, 1, 4, 4, 6, 7, 8 }, { 2, 2, 6, 6, 9, 9, 3 } };

	Upper(matrix);

	cout << "\n";
	return 0;
}