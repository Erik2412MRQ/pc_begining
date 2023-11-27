#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    string colorless = "#Black&White";
    cin >> filas >> columnas;
    for(int i = 0; i < filas; i ++){
        for(int j = 0; j < columnas; j++){
            char element;
            cin >> element;
            if(element =='C' || element == 'M' || element== 'Y' ){
                colorless = "#Color";
            }
        }
    }
    cout << colorless;
    
}