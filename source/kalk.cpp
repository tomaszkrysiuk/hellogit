#include <iostream>
#include <map>
#include <string>
#include <algorithm>


using namespace std;


/**********************************************************************/

void sayhello(void)
{
    int HowMany=0;
    cout<<"ile razy powiedziec \"hello\"?: ";
    cin>>HowMany;
    for(int i = 0;i<HowMany;++i)
    {cout<<"Hello!"<<endl;}

}


/**********************************************************************/
//dodawanie

void dodawanie()
{
    double a,b;
    a=b=0;
    cout<< "podaj pierwsza liczbe: ";
    cin>>a;
    cout<< "podaj druga liczbe: ";
    cin >> b;
    cout<<endl;
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}


/**********************************************************************/


void odejmowanie()
{
    double a,b;
    a=b=0;
    cout<< "podaj pierwsza liczbe: ";
    cin>>a;
    cout<< "podaj druga liczbe: ";
    cin >> b;
    cout<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
}

void mnozenie()
{
    double a,b;
    a=b=0;
    cout<< "podaj pierwsza liczbe: ";
    cin>>a;
    cout<< "podaj druga liczbe: ";
    cin >> b;
    cout<<endl;
    cout<<a<<" x "<<b<<" = "<<a*b<<endl;
}

void dzielenie()
{
    double a,b;
    a=b=1;
    cout<< "podaj pierwsza liczbe: ";
    cin>>a;
    cout<< "podaj druga liczbe: ";
    cin >> b;
    cout<<endl;
    if(b!=0)
    cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    else
        cout<<"nie mozna podzielic przez "<<b<<endl;
}


