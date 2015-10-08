#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <funkcje.h>
#include <mapa_funkcji.h>
using namespace std;

int main()
{
    cout<<"witaj!"<<endl<<endl;
    DostepneFunkcje(mapa_funkcji);

    cout<< "\npodaj nazwe funkcji: ";

    string WybranaFunkcja;
    getline(cin,WybranaFunkcja);

    wykonaj(mapa_funkcji,WybranaFunkcja);


    return 0;
}
