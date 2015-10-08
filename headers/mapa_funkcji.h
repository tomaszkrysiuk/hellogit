#ifndef MAPA_FUNKCJI_H_INCLUDED
#define MAPA_FUNKCJI_H_INCLUDED

map<string,void(*)(void)> mapa_funkcji
{
    {"zzz",sayhello},
    {"dodaj",dodawanie},
    {"odejmij",odejmowanie},
    {"pomnoz",mnozenie},
    {"podziel",dzielenie}


} ;




#endif // MAPA_FUNKCJI_H_INCLUDED
