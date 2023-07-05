#include "float.h"

void flooat::float_actions()
{
    float a{ 0 }, b{ 0 };
    int zmienna;

    cout << "\nWybierz dzialanie na FLOAT tak jak powyzej na instrukcji: ";
    
    cin >> zmienna;
    cout << "Podaj liczbe pierwsza liczbe float - > "; cin >> a;
    cout << "\nPodaj liczbe druga float - > "; cin >> b;

    switch (zmienna)
    {
    case 1:
        cout << "Wynik dodawania -> " << a << "+" << b << "=" << (a + b) << endl;
        break;

    case 2:
        cout << "Wynik odejmowania -> " << a << "-" << b << "=" << (a - b) << endl;
        break;

    case 3:
        cout << "Wynik mnozenia -> " << a << "*" << b << "=" << (a * b) << endl;
        break;

    case 4:
        bool condition = true;
        while(condition){
            if (b == 0) {
                cout <<"Licznik nie moze byc zerem" << "Podaj drugi raz liczbe : "; cin >> b;
                condition = true;
            }
            else {
                cout << "Wynik dzielenia -> " << a << "/" << b << "=" << (a / b) << endl;
                condition = false;
            }
        }
        break;
    }
}
