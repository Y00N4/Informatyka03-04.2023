// CoToZaRoznica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//program w ktorym podaje sie liczba a program musi ja zgadnac i podac ilosc prob
#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int main()
{
 int losowa=0;
 int liczbauzytkownika;
    cin >> liczbauzytkownika;
  srand(time(NULL));
   losowa = (rand()% 101)+ 0;
    cout << losowa<< endl;

     int najmniejszaliczba=1;
     int najwiekszaliczba= 100;

    for (int i=0; i<10; i++) {


        if (liczbauzytkownika > losowa){
            cout << losowa <<" liczba jest za mala" << endl;
            najmniejszaliczba = losowa+1;
            cout << "limit od: " << najmniejszaliczba << "do: " << najwiekszaliczba << endl;
        }
         else if (liczbauzytkownika < losowa) {
            cout << losowa <<  " liczba jest za duza" << endl;
            najwiekszaliczba=losowa-1;
        }
        else if (liczbauzytkownika == losowa){
            cout << "wygrana" << endl;
        }
        else {
            cout << "blad" << endl;
        }
        losowa =  najmniejszaliczba + (rand() % ( najwiekszaliczba - najmniejszaliczba + 1 ) );
        cout << "liczba prob: " << i<< endl;
    }
}



///zad 2. 
//stworz program, ktory rozwiazuje rownania kwadratowe (z wykorzystaniem struktur}
                                                       //zrob strukture figury (ilosci bokow itd)
#include <bits/stdc++.h>

// x^2 +x + lb wolna  a =1 b= liczba kolo x c= wolna delta= b^2 -4ac

using namespace std;

struct FunkcjaKwadratowa{
    float a=0;
    float b=0;
    float c=0;
    float delta=0;
};

float liczeniedelty(float a, float b, float c){
    float result = pow(b,2.0)-(4.0*(a*c));
    return result;
}

int main()
{


    cout << "Podaj rownanie kwadratowe: ";

    FunkcjaKwadratowa dzialanie;
    cout << "podaj A:";
    cin >> dzialanie.a;
    cout << "podaj b;";
    cin >>dzialanie.b;
    cout <<"podaj c: ";
    cin>> dzialanie.c;

    dzialanie.delta=liczeniedelty(dzialanie.a, dzialanie.b, dzialanie.c);

    if (dzialanie.delta==0){ // delta=0 1 rozwiazanie, delta > 0 2roz delta < 0 0 roz
        cout<< dzialanie.delta << endl;
        cout << "x=" << (-dzialanie.b/(2*dzialanie.a));
    }
    else if (dzialanie.delta<0){
        cout << "delta jest ujemna: 0 rozwiazań";
    }
    else {
        cout << "delta: "<< dzialanie.delta << endl;
        cout << "x1= " << (((-1.0* dzialanie.b)-(sqrt(dzialanie.delta))/(2*dzialanie.a)) << endl;
        cout << "x2= "<< (((-1.0 * dzialanie.b)+(sqrt(dzialanie.delta))/(2*dzialanie.a)) << endl;
    }

}

