#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i ++){
        int number;
        cin >> number;
        int indice,contador = 0,contadorCifrasF = 1;
        if( number > 10 ){
            indice = number % 10;
        }
        else{
            indice = number % 11;
        }
        contador = (indice-1) * 10;
        while(number / 10 != 0){
           contadorCifrasF++; 
           number /= 10;
        }
        contador += contadorCifrasF*(1+contadorCifrasF)/2;
        cout << contador << endl;
    }    

}