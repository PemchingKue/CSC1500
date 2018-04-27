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

set<char> Union(set<char> A, set<char> B) {
	set<char> C;
	set<char>::iterator it;

	for (it = A.begin(); it != A.end(); ++it){
		C.insert(*it);
	}
	
	for (it = B.begin(); it != B.end(); ++it){
		C.insert(*it);
	}
	
	return C;
}

set<char> Intersection(set<char> A, set<char>B) {
	set<char> C;
	set<char>::iterator it;

	for (it = A.begin(); it != A.end(); ++it){
		C.insert(*it);
	}

	for (it = A.begin(); it != A.end(); ++it){
		if ((B.find(*it) == B.end()) != (A.find(*it) == A.end())){
			C.erase(*it);
		}
	}
	
	return C;
}

set<char> difference(set<char> A, set<char>B) {
	set<char> C;
	set<char>::iterator it;

	for (it = A.begin(); it != A.end(); ++it){
		C.insert(*it);
	}
	
	for (it = B.begin(); it != B.end(); ++it){
		if ((A.find(*it) == A.end()) == (B.find(*it) == B.end())){
			C.erase(*it);
		}
	}
	return C;
}

bool isSubset(set<char> A, set<char> B) {
	bool answer = true;
	bool answer2 = false;

	if (A == B){
		return answer;
	}
	else{
		return answer2;
	}

}

int main() {

	ifstream input("prog1_input.txt");
	ofstream output;
	output.open("prog1_output.txt");
	set<char> setA, setB;
	char tempChar;
	bool doneReadingA = false, doneReadingB = false;

	while (input) {
		input.get(tempChar);
		if (tempChar == '\n' && !doneReadingA) {
			doneReadingA = true;
		}
		else if (tempChar == '\n' && doneReadingA) {
			doneReadingB = true;
		}
		else if (input && !doneReadingA) {
			setA.insert(tempChar);
		}
		else if (input && !doneReadingB) {
			setB.insert(tempChar);
		}
		else
			break;
	}

	output << "The union of A and B is:" << endl;
	set<char>::iterator it;
	char setElement;
	set<char> AunionB = Union(setA, setB);
	for (it = AunionB.begin(); it != AunionB.end(); ++it) {
		setElement = *it;
		output << setElement;
	}

	output << "\n";

	output << "The intersection of A and B is:" << endl;
	set<char>::iterator it2;
	char setElement2;
	set<char> AintersectionB = Intersection(setA, setB);
	for (it2 = AintersectionB.begin(); it2 != AintersectionB.end(); ++it2) {
		setElement2 = *it2;
		output << setElement2;
	}
	output << "\n";

	output << "The Difference of A and B is:" << endl;
	set<char>::iterator it3;
	char setElement3;
	set<char> AdifferenceB = difference(setA, setB);
	for (it3 = AdifferenceB.begin(); it3 != AdifferenceB.end(); ++it3) {
		setElement3 = *it3;
		output << setElement3;
	}
	output << "\n";

	output << "Subset" << endl;
	if (isSubset(setA, setB) == 0){
		output << "A is not a Subset of B" << endl;
	}
	else{
		output << "A is a Subset of B" << endl;
	}

	output << "\n";

	return 0;

}