/*

7.Znajd� poprzednik i nast�pnik najmniejszej warto�ci w tablicy (warto�� kom�rki o numerze o jeden wi�kszym i o jeden mniejszym, ni� indeks minimum tablicy).

8.Przepisa� do nowej tablicy te elementy, kt�rych warto�� jest >10. Nowa tablica ma mie� rozmiar r�wny ilo�ci tych element�w.

9.Utw�rz now� tablic� 100 elementow�. Wype�nij j� w taki spos�b, aby
B[i] = A[1] + A[2] + A[3] + � + A[i],
gdzie B to nasza nowa, a A, stara tablica.

10.Posortuj tablic� malej�co.

11.Wypisz na ekran elementy, kt�re wyst�puj� w tablicy przynajmniej 3 razy.


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
 /*WYSZUKIWANIE MIN I MAKS + INFO ILE RAZY TE LICZBY WYST�PI�Y W TABLICY*/
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
    /*WY�WIETLANIE LICZB NIEPARZYSTYCH*/
 if(tab[i] % 2 = 0; i++;){
cout << "Do liczb nieparzystych nale�� warto�ci: " << << endl;
 }

---------ZAD 4
/*Wy�wietl na ekran liczby znajduj�ce si� w kom�rkach o nieparzystych indeksach.*/

---------ZAD 5
/*Program policzy ile liczb zawiera si� w przedziale <5, 15) , po czym wypisze te liczby na ekran.*/

---------ZAD 6
/*6.Znajd� element najbli�szy warto�ci� wprowadzonej przez u�ytkownika liczbie �a�.*/
cout << "Wprowad� dowolna liczba jako zmienna a i znajdziemy ci jak�� najbli�sz� z tablicy: ";
cin>>a;
if(tab[i])
    return 0;
}
