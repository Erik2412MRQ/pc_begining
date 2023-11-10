#include <iostream>
using namespace std;

int main() {
    int pricePala, monedaDif,contPalas = 1, i = 2;
    cin >> pricePala >> monedaDif;
    int tempPricePala = pricePala;
    while((tempPricePala - monedaDif) % 10 != 0 && tempPricePala % 10 != 0 ){
        tempPricePala = pricePala;
        contPalas++;
        tempPricePala *= i;
        i ++;
    }    
    cout << contPalas;
}