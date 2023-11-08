#include <bits/stdc++.h>

using namespace std;


    bool czyPierwsza(int liczba){
       // if (liczba%=1 && liczba%=liczba ){
        //cout << true << endl;}
        //else {
        //cout << false << endl;}

        if(liczba < 2){ //0 ani 1 nie sa liczbami pierwszymi
            return false;
        }
        for (int i=0; i< liczba/2 ;i++){
             if(liczba%i==0){
                return false;
        }
            return true;
        }
    }

int main()
{   int iloscWystapien=0;
    fstream file("liczby.txt");
    string line;

    if(!file.is_open()){
        return-1;
    }
    while (file >> line){ //pobieranie danych po bia³ym znaku
        //czyPierwsza(stoi(line));
        iloscWystapien+=czyPierwsza(stoi(line));


         //zamiana do int
    }


    cout << iloscWystapien;
  //  while (getline(file, line)){//pobieranie ca³ej linii do zamiennej linii
   //     cout << line;
   // }




}
