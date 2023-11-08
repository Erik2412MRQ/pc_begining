#include <iostream>
using namespace std;

int main() {
    int numberOfSold, mayor , menor, posMenor = 0, posMayor = 0, minPasos = 0;

    cin >> numberOfSold;
    int alturas[numberOfSold];

    cin >> alturas[0];
    mayor = alturas[0];
    menor = alturas[0];

    for(int i = 1; i < numberOfSold; i ++){
        cin >> alturas[i];
        if ( alturas[i] > mayor ){
            mayor = alturas[i];
            posMayor = i;
        }
        
        if ( alturas[i] <= menor ){
            menor = alturas[i];
            posMenor = i;
        }

    }

    while(posMayor != 0 || posMenor != numberOfSold - 1){
        if(posMenor != numberOfSold - 1 ){
            int tempValor = alturas[posMenor + 1];
            if(posMenor + 1 == posMayor){
                posMayor--;
            }
            alturas[posMenor+1] = menor;
            alturas[posMenor] = tempValor; 
            posMenor ++;
           
            minPasos ++;
        }
        else if (posMayor != 0){
            int tempValor = alturas[posMayor -1];
            alturas[posMayor - 1] = mayor;
            alturas[posMayor] = tempValor;
            posMayor--;
            minPasos++;
        }
    }
    cout <<  minPasos; 
}