#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int tab[100];
int min = tab[0];
int maks = tab[0];
int ile = 0;
int wliczanie = 0;
int a;
int main()
{
// ZAD 1
 srand(time(NULL));
 for(int i = 0; i < 100; i++){
    tab[i]=rand()%100+1;
    cout << tab[i] << ",";
 }
//ZAD 2
 for(int i = 1; i < 100; i++){
if(tab[i] > maks){
maks = tab[i];
ile = 1;
}else if(tab [i] == maks){
    ile++;
}}
 cout << "Najwieksza liczba to: " << maks <<endl;
 cout << "Ilosc wystapien najwiekszej liczby: " << ile << endl;



 //ZAD 3
cout << "Do liczb nieparzystych należą wartości: " << endl;
for(int i = 1; i < 100; i++){
        if(tab [i] % 2 != 0){
            cout << tab[i] << " ";
        }


//ZAD 4
for(int i = 1; i < 100; i+=2){
  cout << tab[i] << " ";
}

//ZAD 5
cout << "Liczby z przedzialu <5, 15) to: ";
for(int i = 1; i < 100; i++){
        if(tab [i] >= 5 && tab [i] < 15){
                cout << tab[i] << " ";
                wliczanie++;
        }}
        cout << "W przedziale znajduje sie: " << wliczanie <<" liczb" <<endl;
//ZAD 6
/*6.Znajdź element najbliższy wartością wprowadzonej przez użytkownika liczbie „a”.*/
cout << "Wprowadź dowolna liczba jako zmienna a i znajdziemy ci jakąś najbliższą z tablicy: ";
cin>>a;

//ZAD 7
/*7.Znajdź poprzednik i następnik najmniejszej wartości w tablicy (wartość komórki o numerze o jeden większym i o jeden mniejszym, niż indeks minimum tablicy).
*/

//ZAD 8
/*8.Przepisać do nowej tablicy te elementy, których wartość jest >10. Nowa tablica ma mieć rozmiar równy ilości tych elementów.*/

//ZAD 9
/*9.Utwórz nową tablicę 100 elementową. Wypełnij ją w taki sposób, aby
B[i] = A[1] + A[2] + A[3] + … + A[i],
gdzie B to nasza nowa, a A, stara tablica.*/

//ZAD 10

/*10.Posortuj tablicę malejąco.*/

//ZAD 11

/*11.Wypisz na ekran elementy, które występują w tablicy przynajmniej 3 razy.*/
    return 0;
}
