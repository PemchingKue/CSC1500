//==========================================================
//
//  Title:      Prog1
//  Course:     CSC 1501
//  Lab Number: 001
//  Author:     Pemching Kue
//  Date:       1/17/17
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
	
	ofstream file;
	file.open("prog1_output.txt");

	bool p[] = { true, false };

	cout << "p | q | !p | !q | p ^ q | p !| q | p V q | p --> q | p <--> q| \n";
	file << "p | q | !p | !q | p ^ q | p !| q | p V q | p --> q | p <--> q| \n";

	cout << "\n";
	file << "\n";

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << boolString(p[i]) << " | " << boolString(p[j]) << " |  " << boolString(!p[i]) << " |  " << boolString(!p[j])
				<< " |   " << (boolString(p[i] & p[j])) << "   |    " << (boolString(p[i] ^ p[j]))
				<< "   |   " << (boolString(p[i] && p[j])) << "   |    " << (boolString(!p[i] || p[j]))
				<< "    |    " << (boolString(p[i] ^ !p[j])) << "    |   " << "\n";
			
			file << boolString(p[i]) << " | " << boolString(p[j]) << " |  " << boolString(!p[i]) << " |  " << boolString(!p[j]) 
				<< " |   " << (boolString(p[i] & p[j])) << "   |    "<< (boolString(p[i] ^ p[j])) 
				<< "   |   " << (boolString(p[i] && p[j])) << "   |    " << (boolString(!p[i] || p[j]))
				<< "    |    " << (boolString(p[i] ^ !p[j])) << "    |   " << "\n";
		}
	}
	
	cout << "\n";
	file << "\n";

	file.close();

	return 0;

}
