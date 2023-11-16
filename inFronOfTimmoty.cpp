#include <iostream>
using namespace std;

int main() {
   int totalCase;
   cin >> totalCase; 
   for(int i = 0; i < totalCase; i++){
        int valueOftimmoty;
        cin >> valueOftimmoty;
        int aux = valueOftimmoty, contador= 0;
        for(int j = 0; j < 3; j++){
            cin >> valueOftimmoty;
            if(aux < valueOftimmoty){
                contador++;
            }
        }
        cout << contador << endl;
   }
}