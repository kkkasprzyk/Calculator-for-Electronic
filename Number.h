#pragma once
#include <string>
#include <iostream>
using namespace std;
class Number
{
private:
	//long long int value = 0;//value in decimal representation - always
	
public:
	long long int value{};

	// parameterized constructor to initialize variables
	Number(long long int input) {
		value = input;
	}



	void printValue();
	void printHEX();
	void printOCT();
	void printBIN();
	long long int getValue(); //10 based but that's int
	void decToHex(long long int input);
	void decToBin(long long int input);
	void decToOctal(long long int input);

	
};