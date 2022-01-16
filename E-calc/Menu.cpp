#include "Menu.h"
#include "Number.h"
#include <iostream>
#include <stdio.h>
using namespace std;
#include "Reader.h"
#include "Calculator.h"

void Menu::printMenu()
{
    int wybor;
    std::cout << "                             ###############################  Kalkulator Elektronika  ############################" << std::endl;
    std::cout << "\n1.Dodawanie \n" << std::endl;
    std::cout << "2.Odejmowanie \n" << std::endl;
    std::cout << "3.Mnozenie \n" << std::endl;
    std::cout << "4.Dzielnie \n" << std::endl;
    //std::cout << "5.Zamiana z dec,hex,octal,bin na dec,hex,octal,bin \n" << std::endl;

    cout << "Wybierz dzialanie :";
    cin >> wybor;

    switch (wybor)
    {
        //DODAWANIE
    case 1: {
        Reader reader = Reader();
        Number a = reader.readNumber(); // sczytywanie
        a.printValue();
        Number b = reader.readNumber();// sczytywanie
        b.printValue();
        Calculator calc = Calculator();
        cout << "Wynik Dodawania->";
        Number sum = calc.add(a, b);
        sum.printValue();

    }
          break;
          //ODEJMOWANIE
    case 2: {
        Reader reader = Reader();
        Number a = reader.readNumber(); // sczytywanie
        a.printValue();
        Number b = reader.readNumber();// sczytywanie
        b.printValue();
        Calculator calc = Calculator();
        Number wynik = calc.mns(a, b);
        cout << "n/Wynik Odejmowania-> ";
        wynik.printValue();
    }
          break;
          // MNO¯ENIE
    case 3: {
        Reader reader = Reader();
        Number a = reader.readNumber(); // sczytywanie
        a.printValue();
        Number b = reader.readNumber();// sczytywanie
        b.printValue();
        Calculator calc = Calculator();
        Number wynik = calc.mltp(a, b);
        cout << "n/Wynik Mnozenia-> ";
        wynik.printValue();
    }
          break;
          //DZIELENIE 
    case 4: {
        Reader reader = Reader();
        Number a = reader.readNumber(); // sczytywanie
        a.printValue();
        Number b = reader.readNumber();// sczytywanie
        b.printValue();
        Calculator calc = Calculator();
        Number wynik = calc.divide(a, b);
        cout << "n/Wynik Dzielenia-> ";
        wynik.printValue();
    }
          break;
    }



}


//void Menu::printResult(Number result, char operator) {
//    std::cout << "Re \n" << std::endl;
//}