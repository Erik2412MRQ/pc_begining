#include <iostream>
using namespace std;

int main() {
    int totalPruebas, n_candies;
    cin >> totalPruebas;
    int arrayCasosTotal[totalPruebas];
    for(int i = 0; i < totalPruebas; i ++){
        cin >> n_candies;
        if(n_candies == 1 || n_candies == 2){
            arrayCasosTotal[i] = 0;
        }
        else if( n_candies % 2 == 0 ){
            arrayCasosTotal[i] = (n_candies / 2) -1;
        }
        else{
            arrayCasosTotal[i] = ( (n_candies + 1) / 2) - 1;
        }
    }
    for(int i = 0; i < totalPruebas; i++){
        cout << arrayCasosTotal[i] << endl;
    }
}