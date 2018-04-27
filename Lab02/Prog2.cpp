//==========================================================
//
//  Title:      Prog2
//  Course:     CSC 1501
//  Lab Number: 001
//  Author:     Pemching Kue
//  Date:       1/24/17
//  Description:
//    
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

string boolString(bool p) {
	if (p)
		return "T";
	else
		return "F";
}

int main()
{
	int p = 0;
	int q = 0;


	bool a[] = { true, false };
	bool results[2][2];

	cout << "p\tq\t(pVq)\t(!p^!q)\t\t(pVq)V(!p^!q)\n";
	for (int p = 0; p < 2; p++)
		for (int q = 0; q < 2; q++){
			
			results[p][q] = (a[p] | a[q]) || (!a[p] & !a[q]);

			cout << boolString(a[p]) << "\t" << boolString(a[q]) << "\t"<< boolString(a[p] | a[q]) << "\t" <<
				boolString(!a[p] & !a[q]) << "\t\t" << boolString((a[p] | a[q]) || (!a[p] & !a[q])) << "\n";
		}

	bool andAllResults = true;
	bool orAllResults = false;

	for (int p = 0; p<2; p++)
		for (int q = 0; q < 2; q++) {
			andAllResults = andAllResults && results[p][q];
			orAllResults = orAllResults && results[p][q];
		}

	if (andAllResults)
		cout << "This is tautology.\n\n";
	else if (orAllResults)
		cout << "This is a contradiction.\n\n";
	else  
		cout << "It is neither.\n\n";

	bool results2[2][2];

	cout << "p\tq\tr\t(p<->q)\t\t(p<->q)<->r\n";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			for(int r = 0; r<2; r++){
				
				bool pIFq = ((!a[j] || a[i]) && (!a[i] || a[j]));
				bool results2 = (!a[r] || pIFq) && (!pIFq || a[r]);

				cout << boolString(a[i]) << "\t" << boolString(a[j]) << "\t" << boolString(a[r])<< "\t" << 
					boolString((!a[j] || a[i]) && (!a[i] || a[j])) << "\t\t" << boolString((!a[r] || pIFq) && (!pIFq || a[r]))
					<<"\n";
		}

	for (int i = 0; i<2; i++)
		for (int j = 0; j < 2; j++) 
			for(int r = 0; r <2; r++){
				
				bool pIFq = ((!a[j] || a[i]) && (!a[i] || a[j]));
			
				andAllResults = andAllResults && results2[r][pIFq];
				orAllResults = orAllResults || results2[r][pIFq];
		}


	if (!orAllResults)
		cout << "This is a contradiction.\n\n";
	else
		cout << "It is neither.\n\n";

	return 0;

}
