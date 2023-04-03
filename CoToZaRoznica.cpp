
//zadanie ze struktur na stworzenie dzienniczka. 

#include <iostream>
#include<vector>
#include<map>
using namespace std;

struct Osoba{
    int numerwDzienniku;
    string imie;
    string nazwisko;
    vector<int> oceny;
    map<string, vector<int>> przedmioty;

    float Srednia() {
        float suma = .0;
        for (auto ocena : oceny) {
            suma += ocena;
        }
        return suma / oceny.size();
    }

    void PokazUcznia() {
        cout << imie << " " << nazwisko << "\n";
        for (auto ocena : oceny) {
            cout << ocena << " ";
        }cout << endl;
        cout << "Średnia: " << Srednia() << endl;
    }
};

int main() {
    vector<Osoba> dziennik;

    int numer = 0;
    while (true) {
        Osoba uczen;
        cout << "Podaj numer w dzienniku: ";
        cin >> numer;

        if (numer == 0)
            break;

        uczen.numerwDzienniku = numer;

        cout << "Podaj imie: ";
        cin >> uczen.imie;
        cout << "Podaj nazwisko: ";
        cin >> uczen.nazwisko;

        cout << "Podaj oceny: (0 = koniec)";
        int ocena = -1;
        while (ocena != 0) {
            cin >> ocena;
            if (ocena < 0 || ocena > 6) {
                cout << "Blad\n";
                continue;
            }
            uczen.oceny.push_back(ocena);
        }
        dziennik.push_back(uczen);
        cout << "\nDodano ucznia\n";
    }

    cout << "\n\n ------------------------------------- \n";

    for (auto osoba : dziennik) {
        osoba.PokazUcznia();
    }
}







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
//zadanie 69.
                          
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string napis = "W roku Pańskim 1345, władca Henryk 12, na rzecz swoich 143209 poddanych uchwalił dekret o 20 procentowej zniżce podatków";
    map<int, int> liczby;

    int suma = 0;
    string aktualna_liczba = "";

    for (char znak : napis) {
        if (znak >= '0' && znak <= '9') {
            aktualna_liczba += znak;
        }
        else if (!aktualna_liczba.empty()) {
            int liczba = stoi(aktualna_liczba);
            suma += liczba;
            liczby[liczba]++;
            aktualna_liczba = "";
        }
    }

    if (!aktualna_liczba.empty()) {
        int liczba = stoi(aktualna_liczba);
        suma += liczba;
        liczby[liczba]++;
    }

    cout << "Suma liczb: " << suma << endl;
    cout << "Ilość wystąpień poszczególnych liczb:" << endl;
    for (auto para : liczby) {
        cout << para.first << ": " << para.second << endl;
    }

    return 0;
}
                          
     // 28.03                     farmerzy rolniki itd
    #include <iostream>

using namespace std;

//MLECZARNIA

struct Dostawca {
    int numer_rolnika;
    string nazwa_regionu;
    string nazwisko;
    string imie;
    float ilosc_litrow_mleka;
    float zawartosc_tluszczu;
};

int main()
{
    Dostawca tab[5] = { {1,"Region Pierwszy","Nazwisko 1","Imie 1",100,2.0},
                    {2,"Region Drugi","Nazwisko 2","Imie 2",150,3.5},
                    {3,"Region Trzeci","Nazwisko 3","Imie 3",235,3.0},
                    {4,"Region Czwarty","Nazwisko 4","Imie 4",346,3.5},
                    {5,"Region Piaty","Nazwisko 5","Imie 5",100,2.0} };

    //1
    for (auto element : tab) {
        cout << "nr. " << element.numer_rolnika << endl;
        cout << "region: " << element.nazwa_regionu << endl;
        cout << "Mleczarz: " << element.nazwisko << " " << element.imie << endl;
        cout << "Litry mleka: " << element.ilosc_litrow_mleka << endl;
        cout << "Zawartosc tlusczu (%): " << element.zawartosc_tluszczu << endl;
    }
    //2 i 3
    float suma = 0.0;
    float srednia = 0.0;
    for (auto element : tab) {
        suma += element.ilosc_litrow_mleka;
        srednia += element.zawartosc_tluszczu;
    }
    srednia = srednia / 5;

    cout << " " << endl;
    cout << "Suma litroww mleka: " << suma << endl;
    cout << "Srednia zawartosc tluszczu: " << srednia << endl;
    /* Wylicz wyp³aty dla pracowników na podstawie za ka¿dy litr --> 1.15 zl
    jeœli >150 l mleka to do litra dop³ata 0.5 z³
    jeœli mniej ni¿ 3.8% to --> 0,4z³ dop³aty */

    //4


    float wyplata = 0.0;
    float sumaWyplat = 0.0;

    cout << " " << endl;

    for (auto element : tab) {
        wyplata = element.ilosc_litrow_mleka * 1.15;

        if (element.ilosc_litrow_mleka > 150) {
            wyplata += element.ilosc_litrow_mleka * 0.5;
        }
        if (element.zawartosc_tluszczu < 3.8) {
            wyplata += element.ilosc_litrow_mleka * 0.4;
        }
        cout << "Wyplata dla rolnika " << element.numer_rolnika << " wynosi: " << wyplata << endl;
        sumaWyplat += wyplata;
        wyplata = 0.0;
    }
    cout << " " << endl;
    cout << "Suma wyplat: " << sumaWyplat << endl;

    return 0;
}
                          

                      
                          
                          
