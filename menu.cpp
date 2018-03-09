#include <iostream>
#include "zbior_pytan.h"
#include "quiz.h"
#include "menu.h"
#include <time.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

void Menu::dodajPytanie()
{
    cout << "Podaj tresc: ";
    getline(cin,tresc);
    cout << "Podaj odpowiedz a: ";
    cin>>a;
    cout << "Podaj odpowiedz b: ";
    cin>>b;
    cout << "Podaj odpowiedz c: ";
    cin>>c;
    cout << "Podaj odpowiedz d: ";
    cin>>d;
    cout << "Podaj odpowiedz prwidlowa: ";
    cin>>poprawna;

    fstream plik;
    plik.open("pytania.txt",ios::out | ios::app);

    plik<<tresc<<"\n";
    plik<<"a) "<<a<<"\n";
    plik<<"b) "<<b<<"\n";
    plik<<"c) "<<c<<"\n";
    plik<<"d) "<<d<<"\n";
    plik<<poprawna<<"\n";

    plik.close();
}


void Menu::start()
{
    cout<<"\tWitam w QUIZIE\n";
    Sleep(1000);
    cout<<"**************************************************\n";
    cout<<"1. Rozpocznij Quiz\n";
    cout<<"2. Dodaj pytanie\n";
    cout<<"3. Zakoncz\n";
    wybor=getch();
    switch(wybor)
    {
    case '1':
    {
        clock_t start,stop;
        cout<<"Ile pytan ma miec qiuz?\n";
        cin>>n;
        start = clock();
        int suma=0;
        for(int i=0; i<=n-1; i++)
        {
            z.zp[i].zadaj();
            system("cls");
            z.zp[i].sprawdz();
            suma+=z.zp[i].punkt;
        }
        cout<<"konie quizu, punkty = " <<suma<<"\n";
        stop = clock();
        czas = (double)(stop-start) / CLOCKS_PER_SEC;
        cout<<"Czas trwania quizu: "<<czas<<" s"<<endl;
    }
    break;
    case '2':
    {
        Menu p1;
        Menu p2;
        p1.dodajPytanie();
        system("cls");
        p2.start();
    }
    break;
    case '3':
    {
        exit(0);
    }
    break;
    }


}
