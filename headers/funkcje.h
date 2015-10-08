#ifndef FUNKCJE_H_INCLUDED
#define FUNKCJE_H_INCLUDED

using namespace std;

void sayhello(void); //mowi "hello"
void dodawanie(); // dodaje liczby
void odejmowanie();
void mnozenie();
void dzielenie();


/*******************************************************/


template<class klucz, class wartosc>
void DostepneFunkcje(const map<klucz,wartosc>& InputMap)
{
    if(InputMap.cbegin() != InputMap.cend())
    {
        cout<<"dostepne funkcje to:"<<endl;

        for_each(InputMap.cbegin()
                 ,InputMap.cend()
                 ,[](pair<klucz,wartosc> MyPair){cout<<MyPair.first<<endl;});
    }
    else
        cout<< "brak funkcji!!!"<<endl;
};   //wypisuje dostepne klucze funkcji


/*******************************************************/


template<class klucz, class wartosc>
void wykonaj(const map<klucz,wartosc>& InputMap,string InputKey)
{
       auto SearchResult = InputMap.find(InputKey);

    if(SearchResult != InputMap.cend())
    {
        SearchResult->second();
    }
    else
    {
        cout<< "funkcja "<<InputKey<<" nie istnieje";
    }
};

#endif // FUNKCJE_H_INCLUDED
