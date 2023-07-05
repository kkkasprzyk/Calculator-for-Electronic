#include <iostream>
#include "Menu.h"
#include "Reader.h"
#include "Calculator.h"
#include <bitset>
using namespace std;

int main()
{
	char cont{};
	bool stan = true;
	while (stan) {

		Menu k = Menu();
		k.printMSG();
		k.printMenu();

		cout << "\nKontynuuj dzialanie programu T(tak)/N(nie): "; cin >> cont; 
		cout << "\n ---------------------------------------------" << endl;

		if (cont =='N') {
			stan = false;
		}
		else if (cont == 'T') {
		}
		else {
			cout << "Wybrales nieprawidlowy znak\n\n";
			cont = true;
		}
		
	}
}

