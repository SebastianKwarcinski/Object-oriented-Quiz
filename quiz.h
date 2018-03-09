#ifndef QUIZ_HH
#define QUIZ_HH


#include <iostream>

using namespace std;

class Pytanie
{
public:
    string tresc;
    string a,b,c,d;
    int nr_pytania;
    string poprawna;
    string odpowiedz;
    int punkt;

    void zadaj();
    void sprawdz();

};

#endif // QUIZ_HH
