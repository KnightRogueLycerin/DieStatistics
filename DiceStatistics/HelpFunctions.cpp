#include <cmath>
#include <iostream>

#include "HelpFunctions.h"

/* Chance of getting k syccesses on n dice. Only works up to 33! */
unsigned long long HelpFunctions::facktorial(int n){
	unsigned long long value = 1;
	for (int i = 1; i <= n; i++) {
		value *= i;
	}
	std::cout << " " << n << "! = " << value << std::endl;

	return value;
}

float HelpFunctions::binomialCoefficient(int n, int k){
	

	float upper = facktorial(n);
	float lower = facktorial(k)*facktorial(n - k);
	float binomial = upper / lower;

	std::cout << " Binomial is " << binomial << std::endl;
	

	return binomial;
}

float HelpFunctions::littleP(int n, int k, float p) {
	float value = binomialCoefficient(n, k) * powf(p, float(k)) * powf(1.f - p, float(n-k));
	std::cout << " P(Xn=k) = " << value << std::endl;
	return value;
}

float HelpFunctions::P(int n, int k, float p){
	float value = 1.f;
	for (int i = 0; i < k; i++){
		value -= littleP(n, i, p);
	}
	std::cout << " P(Xn=>k) = " << value << std::endl;
	return value;
}

void HelpFunctions::printLine() {
	std::cout << "< - - - - - - - - " << "-" << " - - - - - - - - >" << std::endl;
}
void HelpFunctions::printLine(int numb = 0){
	std::cout << "< - - - - - - - - " << numb << " - - - - - - - - >" << std::endl;
}
