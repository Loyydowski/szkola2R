#include <iostream>
using namespace std;

int main()
{
    int numer,n;
    cout << "TABLICE DWUWYMIAROWE - CWICZENIA" <<endl;
    /*W programie zasostuj instrukcje wyboru switch - przyklady a-f musza miec wartosc od 1-6
    Utwórz tablicê dwuwymiarow¹ (2*n-1) x (2*n-1), gdzie n podawane jest przez u¿ytkownika.
    Wype³nij j¹ zerami i w zaleznosci od instrukcji w przykladzie uzupelnij ja jedynkami.
    */
    cout << "Podaj wymiary tablicy: " <<endl;
    cin >>n;

    cout<< "Ktore zadanie chcesz sprawdzic???: " <<endl;
    cin>>numer;

    switch(numer){
case 1:
     cout<< "Wybrales przyklad a....." <<endl;
//Obramowanie jedynkami
for(int i = 0; i < n; i++){
  for(int j = 0; j < n; j++){
        if(i ==){

        }

}
}
    break;
    case 2:
     cout<< "Wybrales przyklad b....." <<endl;
     //Przek¹tna jedynkami
     for(i=0; i <n; i++){
        for(j=0; j < n; j++)
            if(i = j) tab[i][j] = 1
     }
    break;
    case 3:
     cout<< "Wybrales przyklad c....." <<endl;

    break;
    case 4:
     cout<< "Wybrales przyklad d....." <<endl;

    break;
    case 5:
     cout<< "Wybrales przyklad e....." <<endl;

    break;
    case 6:
     cout<< "Wybrales przyklad f....." <<endl;

    break;
        case 7:
     cout<< "Wybrales przyklad g....." <<endl;

    break;

        case 8:
     cout<< "Wybrales przyklad h....." <<endl;

    break;



    }
    return 0;
}

