//==========================================================
//
//  Title:      
//  Course:     CSC 1501
//  Lab Number: 001
//  Author:     Pemching Kue
//  Date:       1/30/17
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
#include <bitset>         // std::bitset
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.


int main()
{
	std::bitset<12> string1(std::string("100100111011"));
	std::bitset<12> string2(std::string("111110100000"));


	std::cout << (string1 & string2) << '\n';
	std::cout << (string1 | string2) << '\n';
	std::cout << (string1 ^ string2) << '\n';

	return 0;
}