#pragma once
namespace HelpFunctions {
	/* Only works up to 33! */
	unsigned long long facktorial(int n);

	/* Only works up to 12! */
	float binomialCoefficient(int n, int k);
	
	/* Chance of getting k syccesses on n dice. */
	float littleP(int n, int k, float p);
	/* Chance of getting k syccesses on n dice. */
	float P(int n, int k, float p);

	void printLine();
	void printLine(int numb);
}