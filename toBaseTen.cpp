#include <iostream>
#include <math.h>
using namespace std;

int digitosCant(int number){
    int contador = 0;
    while(number/10 != 0){
        contador++;
        number /= 10;
    }
    return contador;

}

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        int number;
        cin >> number;
        int contador = digitosCant(number);
        cout << number - int(pow(10,contador)) << endl;
    }
    
}