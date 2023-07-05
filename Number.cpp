#include "Number.h"
#include <iostream>
#include <string>
#include <bitset>
using namespace std;

void Number::printValue() {
    long long int b = Number::value;
    cout << "Wartosc w DEC:" << b << endl;
}

void Number::printHEX() {
    long long int k = Number::value;
    cout << "Wartosc w HEX: " << hex << showbase << k << dec <<endl;
}

void Number::printOCT() {
    long long int g = Number::value;
    cout << "Wartosc w OCT: " << oct << g << dec <<endl;
}

void Number::printBIN() {
    long long int k = Number::value;
    cout << "Wartosc w BIN: " << bitset<64>(k).to_string() <<endl;
}

long long int Number::getValue() {
	return value;
}

void Number::decToHex(long long int input)
{
    cout << "Hexadecymalnie: " << hex << showbase << input;
}

void Number::decToBin(long long int input)
{
    cout << "Binarnie: " << bitset<64>(input).to_string();
}

void Number::decToOctal(long long int input)
{
    cout << "Octalnie: " << oct << input;
}

