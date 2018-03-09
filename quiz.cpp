#include <iostream>
#include "quiz.h"


using namespace std;

void Pytanie::sprawdz()
{
    if(odpowiedz==poprawna)
    {
        punkt=1;
    }
    else punkt=0;
}

void Pytanie::zadaj()
{
    cout<<nr_pytania<<"\n";
    cout<<"\n"<<tresc<<"\n";
    cout<<"-------------------\n";
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";
    cout<<d<<"\n";
    cout<<"----------------\n";
    cout<<"\n"<<"Odpowiedz: ";
    cin>>odpowiedz;
}
