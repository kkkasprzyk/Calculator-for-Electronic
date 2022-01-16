#pragma once
#include <string>
#include <iostream>
class Number
{
private:
	long long int value = 0;//value in decimal representation - always
	//float valueF;
public:
	// parameterized constructor to initialize variables
	Number(long long int input) {
		value = input;
	}
	/*Number(float input) {
		valueF = input;
	}*/

	void printValue();
	long long int getValue(); //10 based but that's int
	void decToHex(long long int input);
	void decToBin(long long int input);
	void decToOctal(long long int input);

	
};