#include <iostream>
#include <string>
using namespace std;

void combination(string arr[], int arrSize, int len, int startPosition, string result[], int resultSize){
	if (len == 0){
		cout << result << endl;
		return;
	}
	for (int i = startPosition; i <= arrSize - len; i++){
		result[resultSize - len] = arr[i];
		combination(arr, arrSize, len - 1, i + 1, result, resultSize);
	}
}

int main()
{
	string arr[] = { "A", "B", "C", "D", "E", "F" };
	string result[3];
	combination(arr, 6, 3, 0, result, 3); // call combination function
}

