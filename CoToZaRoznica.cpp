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
