#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstdio>
#include "zbior_pytan.h"
#include "quiz.h"

using namespace std;

void ZbiorPytan::wczytaj()
{
    fstream plik;
    plik.open("pytania.txt",ios::in);

    if(plik.good()==false)
    {
        cout<<"nie udalo sie otworzyc!";
        exit(0);
    }

    string linia;

    Pytanie pytanie;
    while(getline(plik,linia))
    {
        zp.push_back(pytanie);
        zp[zp.size()-1].tresc=linia;
        getline(plik,linia);
        zp[zp.size()-1].a=linia;
                getline(plik,linia);
        zp[zp.size()-1].b=linia;
                getline(plik,linia);
        zp[zp.size()-1].c=linia;
                getline(plik,linia);
        zp[zp.size()-1].d=linia;
                getline(plik,linia);
        zp[zp.size()-1].poprawna=linia;
    }
    plik.close();

}
