/*

7.ZnajdŸ poprzednik i nastêpnik najmniejszej wartoœci w tablicy (wartoœæ komórki o numerze o jeden wiêkszym i o jeden mniejszym, ni¿ indeks minimum tablicy).

8.Przepisaæ do nowej tablicy te elementy, których wartoœæ jest >10. Nowa tablica ma mieæ rozmiar równy iloœci tych elementów.

9.Utwórz now¹ tablicê 100 elementow¹. Wype³nij j¹ w taki sposób, aby
B[i] = A[1] + A[2] + A[3] + … + A[i],
gdzie B to nasza nowa, a A, stara tablica.

10.Posortuj tablicê malej¹co.

11.Wypisz na ekran elementy, które wystêpuj¹ w tablicy przynajmniej 3 razy.


*/
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int tab[100];
int min = 0;
int maks = 0;
int main()
{
--------ZAD 1
 srand(time(NULL));
 for(int i = 0; i < 100; i++){
    tab[i]=rand()%100+1;
    cout << tab[i] << ",";
 }
 /*WYSZUKIWANIE MIN I MAKS + INFO ILE RAZY TE LICZBY WYST¥PI£Y W TABLICY*/
 ---------ZAD 2
 for(int i = 1; i < 100; i++){
    maks=tab[i];
    ile=1;
 }else if(tab[i] == maks){
 ile++;
 }
 cout << "Najwieksza liczba to: " << maks <<endl;
 cout << "Ilosc wystapien najwiekszej liczby: " << ile << endl;


 }
 ---------ZAD 3
    /*WYŒWIETLANIE LICZB NIEPARZYSTYCH*/
 if(tab[i] % 2 = 0; i++;){
cout << "Do liczb nieparzystych nale¿¹ wartoœci: " << << endl;
 }

---------ZAD 4
/*Wyœwietl na ekran liczby znajduj¹ce siê w komórkach o nieparzystych indeksach.*/

---------ZAD 5
/*Program policzy ile liczb zawiera siê w przedziale <5, 15) , po czym wypisze te liczby na ekran.*/

---------ZAD 6
/*6.ZnajdŸ element najbli¿szy wartoœci¹ wprowadzonej przez u¿ytkownika liczbie „a”.*/
cout << "WprowadŸ dowolna liczba jako zmienna a i znajdziemy ci jak¹œ najbli¿sz¹ z tablicy: ";
cin>>a;
if(tab[i])
    return 0;
}
