//==========================================================
//
//  Title:      Prog 3
//  Course:     CSC 1501
//  Lab Number: 001
//  Author:     Pemching Kue
//  Date:       1/26/17
//  Description:
//    
//
//==========================================================
#include <conio.h>
#include <cstdlib>
#include <fstream> 
#include <iomanip> 
#include <iostream>
#include <string>
using namespace std;

string boolString(bool p) {
	if (p)
		return "T";
	else
		return "F";
}

int main()
{
	bool a[] = { true, false };
	bool results[2][2];
	bool results2[2][2];
	bool isSatisfiable = false;

	cout << "p\tq\tr\t(pvq ^ qvr ^ !pv!qv!r)";
	cout << "\n";

	for (int p = 0; p < 2; p++)
		for (int q = 0; q < 2; q++)
			for (int r = 0; r < 2; r++){

				bool results = (a[p] || a[q]) && (a[q] || a[r]) && (!a[p] || !a[q] || !a[r]);

				cout << boolString(a[p]) << "\t" << boolString(a[q]) << "\t" << boolString(a[r]) << "\t\t" 
					<< boolString((a[p] || a[q]) && (a[q] || a[r]) && (!a[p] || !a[q] || !a[r])) << "\t"
					<< "\n";
			}
	
	for (int p = 0; p < 2; p++)
		for (int q = 0; q < 2; q++)
			for (int r = 0; r < 2; r++){
				isSatisfiable = isSatisfiable || results[p][q];
			}

	if (isSatisfiable)
		cout << "is Satisfiable\n";
	else
		cout << "Not Satisfiable\n";

	cout << "\n";

	cout << "p\tq\t(pVq)\t(!p^!q)\t\t(pVq)^(!p^!q)\n";
	for (int p = 0; p < 2; p++)
		for (int q = 0; q < 2; q++){

			results2[p][q] = (a[p] | a[q]) && (!a[p] & !a[q]);

			cout << boolString(a[p]) << "\t" << boolString(a[q]) << "\t" << boolString(a[p] | a[q]) << "\t" <<
				boolString(!a[p] & !a[q]) << "\t\t" << boolString((a[p] | a[q]) && (!a[p] & !a[q])) << "\n";
		}

	for (int p = 0; p < 2; p++)
		for (int q = 0; q < 2; q++){
				isSatisfiable = isSatisfiable || results2[p][q];
			}

	if (!isSatisfiable)
		cout << "is Satisfiable\n";
	else
		cout << "Not Satisfiable\n";

	cout << "\n";

	return 0;

}
