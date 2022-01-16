#include "Reader.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
Number Reader::readNumber()
{
    std::cout << "Podaj liczbe-> ";
    std::string value;
    int base{10};//ddefault base is 10
    long long int decimal{};
    std::cin >> value;
    std::cout << "Podaj podstawe-> ";
    std::cin >> base;
    
    if (base == 2) {
        auto intValue = binaryToDecimal(value);
        return Number(intValue);
        //auto intValue = decToBin(decimal);
       /// return Number(intValue);
        //decToBin(decimal);
    }
    else if (base == 8) {
        //octToDec and return int
        auto intValue = octalToDecimal(value);
        return Number(intValue);
        //decToOctal(decimal);
    }   
    else if (base == 16) {
        //hexToDec  and return int
       auto intValue = hexToDecimal(value);
       return Number(intValue);
        //decToHex(decimal);
    }
    else if(base ==10) {
        return Number(std::stoi(value));
    }
    else {
        std::cout << "Nieobslugiwana podstawa!!!!!!!\n";
    }
}

long long int Reader::octalToDecimal(std::string input)
{
    return std::stoll(input, nullptr, 8);
}

long long int Reader::binaryToDecimal(std::string input)
{
    return std::stoll(input, nullptr, 2);
}

long long int Reader::hexToDecimal(std::string input)
{
    return std::stoll(input, nullptr, 16);
}





      