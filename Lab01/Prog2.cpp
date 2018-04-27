//==========================================================
//
//  Title:      Prog2
//  Course:     CSC 1501
//  Lab Number: 001
//  Author:     Pemching Kue
//  Date:       1/22/17
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

string boolString(bool p){
	if (p)
		return "T";
	else
		return "F";
}

int main()
{
	ofstream file;
	file.open("prog2_output.txt");

	bool a[] = { true, false };

	cout << "p\tq\t(p->q)\t(!q->!p)\t(p->q)<->(!q->!p)\n";
	file << "p\tq\t(p->q)\t(!q->!p)\t(p->q)<->(!q->!p)\n";
	for (int p = 0; p < 2; p++)
		for (int q = 0; q < 2; q++){
			
			cout << boolString(a[p]) << "\t" << boolString(a[q]) << "\t " << boolString(a[q] || a[!p]) << "\t " 
			<< boolString(a[p] || a[!q]) << "\t\t\t" << boolString((!a[!p] || a[q] || a[q] || a[!p]) && (!a[q] || a[!p] || a[!p] || a[q])) << endl;

			file << boolString(a[p]) << "\t" << boolString(a[q]) << "\t " << boolString(a[q] || a[!p]) << "\t "
				<< boolString(a[p] || a[!q]) << "\t\t\t" << boolString((!a[!p] || a[q] || a[q] || a[!p]) && (!a[q] || a[!p] || a[!p] || a[q])) << endl;
		}
	
	cout << endl << "p\tq\t(pVq)\t!(qVp)\t\t(pVq)^(!(p^q))\n";
	file << endl << "p\tq\t(pVq)\t!(qVp)\t\t(pVq)^(!(p^q))\n";
	for (int p = 0; p < 2; p++)
		for (int q = 0; q < 2; q++){
			cout << boolString(a[p]) << "\t" << boolString(a[q]) << "\t " << boolString(a[p] || a[q]) << "\t "
			<< boolString(!(a[p] && a[q])) << "\t\t\t" << boolString((a[p] || a[q]) && (!(a[p] && a[q]))) << endl;

			file << boolString(a[p]) << "\t" << boolString(a[q]) << "\t " << boolString(a[p] || a[q]) << "\t "
				<< boolString(!(a[p] && a[q])) << "\t\t\t" << boolString((a[p] || a[q]) && (!(a[p] && a[q]))) << endl;
		}

	cout << endl << "p\t!p\t(p^!p)\n";
	file << endl << "p\t!p\t(p^!p)\n";
	for (int p = 0; p < 2; p++)
		for (int q = 0; q < 2; q++){
			cout << boolString(a[p]) << "\t" << boolString(a[!p]) << "\t" << boolString(a[p] & a[!p]) << endl;

			file << boolString(a[p]) << "\t" << boolString(a[!p]) << "\t" << boolString(a[p] & a[!p]) << endl;
		}
		
	return 0;

}
