#include "Menu.h"
#include "Number.h"
#include <iostream>
#include "Reader.h"
#include "Calculator.h"
#include "float.h"

void Menu::printMSG() {
    std::cout << "                     ###############################  Kalkulator Elektronika  ############################" << std::endl;
    std::cout << "\n1.Dodawanie \n" << std::endl;
    std::cout << "2.Odejmowanie \n" << std::endl;
    std::cout << "3.Mnozenie \n" << std::endl;
    std::cout << "4.Dzielenie \n" << std::endl;
    std::cout << "5.Dzialania na FLOAT \n" << std::endl;
    cout << "-----------------------------------------------------------------------" << endl;
}


void Menu::printMenu()
{
    int wybor;
   
    cout << "\nWybierz dzialanie : ";
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
        cout << "\nWynik Dodawania->";
        Number sum = calc.add(a, b);
        sum.printValue();
        sum.printHEX();
        sum.printBIN();
        sum.printOCT();
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
        cout << "\nWynik Odejmowania-> ";
        Number diff = calc.mns(a, b);
        diff.printValue();
        diff.printHEX();
        diff.printOCT();
        diff.printBIN();
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
        cout << "\nWynik Mnozenia-> ";
        Number result = calc.mltp(a, b);
        result.printValue();
        result.printHEX();
        result.printOCT();
        result.printBIN();
    }
          break;
          //DZIELENIE 
    case 4: {
        bool pf = true;
        Reader reader = Reader();
        Number a = reader.readNumber(); // sczytywanie
        a.printValue();
        while (pf) {
           Number b = reader.readNumber();
            if (b.getValue()==0) {
                cout << "Mianownik nie moze byc zerem->" << " Podaj jeszcz raz liczbe:" << endl;
                pf = true;
            }
            else {
                b.printValue();
                Calculator calc = Calculator();
                cout << "\nWynik Dzielenia-> ";
                Number result = calc.divide(a, b);
                result.printValue();
                result.printHEX();
                result.printOCT();
                result.printBIN();
                pf = false;
            }
        }
    }
          break;
          //OBS£UGA FLOAT 
    case 5: {
        flooat x;
        x.float_actions();
    }
          break;
    }



}