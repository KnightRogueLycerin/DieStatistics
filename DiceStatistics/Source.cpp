#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>

#include "HelpFunctions.h"

using namespace std;

void main() {
	// Preperations
	int n = 20;			// the max amount of dice rolled
	int k = 10;			// the max amount of the die face you want up
	float p = 1.f/3.f;	// the chance of one die getting the desired face
	std::cout << " n = " << n << " | k = " << k << " | p = " << p << std::endl;
	HelpFunctions::printLine();
	// Open text file
	ofstream output;
	output.open("result.txt");
	// Writing to file
	output << "Chance of getting k syccesses on n dice " << endl;
	output << "with proboility of p, where p is " << p * 100.f << "%" << endl;
	output << "------------------------------------------" << endl;

	for (int i = 1; i <= k; i++){
		HelpFunctions::printLine(i);
		output << ">> k is " << i << " <<" << endl;
		for (int j = 1; j <= n; j++)
		{
			if (j >= i) {
				// to prompt
				HelpFunctions::printLine(j);
				// To file
				output << HelpFunctions::P(j, i, p) * 100.f << "%" << endl;
			}
		}
		output << "- - - - - - - - -" << endl;
	}
	HelpFunctions::printLine();
	// Ending program & closing file
	output.close();
	return;
}