#include <iostream>
#include <time.h>
#include <cstdlib>
#include <algorithm>
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
 cout<<endl;
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
 cout<<endl;
 //ZAD 3
cout << "Do liczb nieparzystych należą wartości: " << endl;
for(int i = 1; i < 100; i++){
        if(tab [i] % 2 != 0){
            cout << tab[i] << " ";
        }
         cout<<endl;
//ZAD 4
for(int i = 1; i < 100; i+=2){
  cout << tab[i] << " ";
}
 cout<<endl;
//ZAD 5
cout << "Liczby z przedzialu <5, 15) to: ";
for(int i = 1; i < 100; i++){
        if(tab [i] >= 5 && tab [i] < 15){
                cout << tab[i] << " ";
                wliczanie++;
        }}
        cout << "W przedziale znajduje sie: " << wliczanie <<" liczb" <<endl;
         cout<<endl;
//ZAD 6

int a;
cout << "Wprowadź dowolną liczbę a: ";
cin >> a;

int najb = tab[0];
int minDiff = tab[0] - a;


for(int i = 1; i < 100; i++) {
    int diff = tab[i] - a;
    if(diff < 0) {
        diff =- diff;
    }
    if(diff < minDiff) {
        minDiff = diff;
        najb = tab[i];
    }
}

cout << "Najbliższa liczba to: " << najb << endl;






 cout<<endl;
//ZAD 7
/*7.Znajdź poprzednik i następnik najmniejszej wartości w tablicy (wartość komórki o numerze o jeden większym i o jeden mniejszym, niż indeks minimum tablicy).
*/
int najm = tab[0];
int k = 0;
for(int i = 1; i < 100; i++) {
    if(tab[i] < najm) {
        najm = tab[i];
        k = i;
    }
}


if(k > 0) {
    cout << "Poprzednik najmniejszej wartości: " << tab[k - 1] << endl;
}
if(k < 99) {
    cout << "Następnik najmniejszej wartości: " << tab[k + 1] << endl;
}
 cout<<endl;
//ZAD 8
int wiekte = 0;
for(int i = 0; i < 100; i++) {
    if(tab[i] > 10) {
        wiekte++;
    }
}

int* zm = new int[wiekte];
int in = 0;
for(int i = 0; i < 100; i++) {
    if(tab[i] > 10) {
        zm[in] = tab[i];
        in++;
    }
}
 cout<<endl;
//ZAD 9
int nowa[100];
nowa[0] = tab[0];
for(int i = 0; i < 100; i++) {
    nowa[i] = nowa[i-1] + tab[i];
}

 cout<<endl;
//ZAD 10
sort(tab,tab + 100,greater<int>());
/*10.Posortuj tablicę malejąco.*/
 cout<<endl;
//ZAD 11

/*11.Wypisz na ekran elementy, które występują w tablicy przynajmniej 3 razy.*/
 cout<<endl;
    return 0;
}
}
