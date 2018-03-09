#ifndef ZBIOR_PYTAN_HH
#define ZBIOR_PYTAN_HH


#include <iostream>
#include <vector>
#include "quiz.h"
using namespace std;


class ZbiorPytan
{
public:
    vector<Pytanie> zp;

    int nr_pytania;
    string poprawna;
    string odpowiedz;
    void wczytaj();

};


#endif // ZBIOR_PYTAN_HH
