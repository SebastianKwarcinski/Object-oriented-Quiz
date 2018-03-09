#ifndef MENU_HH
#define MENU_HH

#include <iostream>
#include "zbior_pytan.h"
#include "quiz.h"
using namespace std;


class Menu
{
    string a,b,c,d;
    ZbiorPytan z;
    Pytanie p;
    string tresc;
    string odpowiedz;
    string poprawna;
    int nr_pytania;
    int punkt;
public:
    Menu()
    {
        z.wczytaj();
    }
    int n;
    char wybor;
    double czas;
    void dodajPytanie();
    void start();
};
#endif // MENU_HH
