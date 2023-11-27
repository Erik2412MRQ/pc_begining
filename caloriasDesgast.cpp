#include <iostream>
#include <string>
using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    int arrayNumber[4] = {a1, a2, a3, a4};
    int caloriasGastadas = 0;
    string iterar;
    cin >> iterar;

    for (int i = 0; i < iterar.length(); i++) {
        int numero = iterar[i] - '0'; // Convertir el carácter a un entero
        for (int j = 0; j < 4; j++) {
            if (numero == j + 1) {
                caloriasGastadas += arrayNumber[j];
                break;
            }
        }
    }

    cout << caloriasGastadas;
    return 0;
}