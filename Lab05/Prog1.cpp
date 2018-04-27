#include <iostream>
using namespace std;

void MatrixAdd(int m[7][7], int n[7][7]){
	int matrix3[7][7];

	cout << "Sum:" << endl;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			matrix3[i][j] = m[i][j] + n[i][j];
			cout << matrix3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void MatrixSubtract(int m[7][7], int n[7][7]){
	int matrix3[7][7];

	cout << "Difference:" << endl;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			matrix3[i][j] = m[i][j] - n[i][j];
			cout << matrix3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void MatrixProduct(int m[7][7], int n[7][7]){
	int matrix3[7][7];

	cout << "Product:" << endl;
	for (int i = 0; i<7; ++i)
	{
		for (int j = 0; j<7; ++j)
		{
			matrix3[i][j] = 0;
			for (int k = 0; k<7; ++k)
				matrix3[i][j] = matrix3[i][j] + (m[i][k] * n[k][j]);
			cout << matrix3[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
}

void MatrixTranspose(int m[7][7]){
	int matrix3[7][7];

	cout << "Transpose:" << endl;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			matrix3[i][j] = m[j][i];
			cout << matrix3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void MatrixSumOfRowAndColumn(int m[7][7]){
	int sum = 0;

	cout << "Sum Of Row And Columns: " << endl;
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			sum = sum + m[i][j];
		}
		cout << sum << endl;
		sum = 0;
	}

	cout << "\n";

	sum = 0;
	for (int j = 0; j < 7; j++){
		for (int i = 0; i < 7; i++){
			sum = sum + m[i][j];
		}
		cout << sum << endl;
		sum = 0;
	}
}

int main(){

	int matrix1[7][7] = { { 6, 7, 3, 3, 6, 4, 7 }, { 1, 1, 5, 4, 8, 3, 2 }, { 1, 1, 4, 2, 8, 9, 3 }, 
	{ 2, 2, 3, 0, 6, 7, 3 }, { 1, 1, 4, 5, 2, 9, 7 }, { 1, 1, 4, 4, 6, 7, 8 }, { 2, 2, 6, 6, 9, 9, 3 } };
	int matrix2[7][7] = { { 1, 5, 2, 8, 4, 0, 2 }, { 6, 9, 2, 4, 5, 0, 2 }, { 1, 1, 5, 3, 8, 8, 3 }, 
	{ 3, 5, 6, 2, 4, 2, 9 }, { 2, 2, 5, 6, 2, 8, 0 }, { 0, 0, 4, 6, 4, 4, 4 }, { 9, 9, 9, 3, 2, 3, 2 } };

	cout << "Matrix 1:" << endl;
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			cout << matrix1[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Matrix 2:" << endl;
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	MatrixAdd(matrix1, matrix2);
	MatrixSubtract(matrix1, matrix2);
	MatrixProduct(matrix1, matrix2);
	MatrixTranspose(matrix1);
	MatrixSumOfRowAndColumn(matrix1);

	return 0;
}