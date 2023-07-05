#include "Reader.h"
#include <iostream>



Number Reader::readNumber()
{
    string value;
    int base{10};//ddefault base is 10
    long long int decimal{};
    cout << "\n 2-bin \n 8-octal \n 16-hex \n 10-dec" << endl;
    cout << "\nPodaj Podstawe-> "; cin >> base;
    cout << "Podaj liczbe -> ";
    cin >> value;
    
    if (base == 2) {
        auto intValue = binaryToDecimal(value);
        return Number(intValue);
    }
    else if (base == 8) {
        //octToDec and return int
        auto intValue = octalToDecimal(value);
        return Number(intValue);
    }   
    else if (base == 16) {
        //hexToDec  and return int
       auto intValue = hexToDecimal(value);
       return Number(intValue);
    }
    else if(base ==10) {
        return Number(stoll(value));
    }
    else {
        cout << "Nieobslugiwana podstawa!!!!!!!\n";
    }
}

long long int Reader::octalToDecimal(std::string input)
{
    return stoll(input, nullptr, 8);
}

long long int Reader::binaryToDecimal(std::string input)
{
    
    return stoll(input, nullptr, 2);
}

long long int Reader::hexToDecimal(std::string input)
{
    return stoll(input, nullptr, 16);
}





      