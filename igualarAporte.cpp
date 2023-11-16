#include <iostream>
using namespace std;

int main() {
    int numberCiudadanos;
    cin >> numberCiudadanos;
    int ciudadanos[numberCiudadanos], mayor = 0;
    cin >> ciudadanos[0];
    mayor = ciudadanos[0];
    for(int i = 1; i < numberCiudadanos; i++){
        cin >> ciudadanos[i];
        if(ciudadanos[i] > mayor){
            mayor = ciudadanos[i];
        }
    }
    int Min_monedas = 0;
    for(int i = 0; i < numberCiudadanos; i++){
        if(ciudadanos[i] < mayor){
            Min_monedas += mayor -ciudadanos[i];
        }
    }
    cout << Min_monedas;    
}