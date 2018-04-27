//==========================================================
//
//  Title:      
//  Course:     CSC 1501
//  Lab Number: 001
//  Author:     Pemching Kue
//  Date:       1/31/17
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
#include <set>
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

set<char> AnBuC(set<char> A, set<char> B, set<char> C) {
	set<char> D;
	set<char>::iterator it;

	for (it = A.begin(); it != A.end(); ++it){
		D.insert(*it);
	}

	for (it = A.begin(); it != A.end(); ++it){
		if ((B.find(*it) == B.end()) != (A.find(*it) == A.end())){
			D.erase(*it);
		}
	}
	for (it = C.begin(); it != C.end(); ++it){
		D.insert(*it);
	}

	return D;
}

set<char> AuBnC(set<char> A, set<char> B, set<char> C) {
	set<char> D;
	set<char>::iterator it;

	for (it = B.begin(); it != B.end(); ++it){
		D.insert(*it);
	}

	for (it = B.begin(); it != B.end(); ++it){
		if ((C.find(*it) == C.end()) != (B.find(*it) == B.end())){
			D.erase(*it);
		}
	}
	for (it = A.begin(); it != A.end(); ++it){
		D.insert(*it);
	}

	return D;
}

set<char> AnBuAnC(set<char> A, set<char> B, set<char> C) {
	set<char> D;
	set<char> E;
	set<char> F;
	set<char>::iterator it;
	//AnB
	for (it = A.begin(); it != A.end(); ++it){
		D.insert(*it);
	}

	for (it = A.begin(); it != A.end(); ++it){
		if ((B.find(*it) == B.end()) != (A.find(*it) == A.end())){
			D.erase(*it);
		}
	}
	//AnC
	for (it = A.begin(); it != A.end(); ++it){
		E.insert(*it);
	}

	for (it = A.begin(); it != A.end(); ++it){
		if ((C.find(*it) == C.end()) != (A.find(*it) == A.end())){
			E.erase(*it);
		}
	}

	//union of D and E
	for (it = D.begin(); it != D.end(); ++it){
		F.insert(*it);
	}
	for (it = E.begin(); it != E.end(); ++it){
		F.insert(*it);
	}

	return F;
}





int main() {

	ifstream input("prog2_input.txt");
	ofstream output;
	output.open("prog2_output.txt");
	set<char> setA, setB, setC;
	char tempChar;
	bool doneReadingA = false, doneReadingB = false, doneReadingC = false;

	while (input) {
		input.get(tempChar);
		if (tempChar == '\n' && !doneReadingA) {
			doneReadingA = true;
		}
		else if (tempChar == '\n' && doneReadingA) {
			doneReadingB = true;
		}
		else if (tempChar == '\n' && doneReadingB) {
			doneReadingC = true;
		}
		else if (input && !doneReadingA) {
			setA.insert(tempChar);
		}
		else if (input && !doneReadingB) {
			setB.insert(tempChar);
		}
		else if (input && !doneReadingC) {
			setC.insert(tempChar);
		}
		else
			break;
	}
	
	output << "(A n B) U C is:" << endl;
	set<char>::iterator it;
	char setElement;
	set<char> AnBuC1 = AnBuC(setA, setB, setC);
	for (it = AnBuC1.begin(); it != AnBuC1.end(); ++it) {
		setElement = *it;
		output << setElement;
	}
	
	output << "\n";

	output << "A U (B n C) is:" << endl;
	set<char>::iterator it2;
	char setElement2;
	set<char> AuBnC1 = AuBnC(setA, setB, setC);
	for (it2 = AuBnC1.begin(); it2 != AuBnC1.end(); ++it2) {
		setElement2 = *it2;
		output << setElement2;
	}

	output << "\n";

	output << "(A n B) U (A n C) is:" << endl;
	set<char>::iterator it3;
	char setElement3;
	set<char> AnBuAnC1 = AnBuAnC(setA, setB, setC);
	for (it3 = AnBuAnC1.begin(); it3 != AnBuAnC1.end(); ++it3) {
		setElement3 = *it3;
		output << setElement3;
	}

	output << "\n";

	return 0;

}