#include "Number.h"
#include <iostream>
#include <string>
#include <bitset>
using namespace std;
void Number::printValue() {
    cout << "\nValue in DEC: " << Number::value << std::endl;
    cout << "\nValue in OCT: " << oct << Number::value << endl;
    cout << "Value in HEX: " << hex << showbase << Number::value << endl;
    cout << "Value in BIN: " << bitset<64>(Number::value).to_string() << endl;
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

