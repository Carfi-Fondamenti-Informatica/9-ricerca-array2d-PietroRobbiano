#include <iostream>
#include "lib.h"
using namespace std;

int main() {

    char nomi[10][20];
    char nome[20];
    init(nomi);
    for ( int i=0; i<10; i++){
        cin >> nomi[i];
    }

    init(nome);
    cin>> nome;
    int a = ricerca(nomi,nome);
    cout << a << endl;
    return 0;
}
