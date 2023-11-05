#include <iostream>
#include <string>
using namespace std;

int main() {
    int cantChildren,time;
    string ordenFila;
    cin>>cantChildren>>time>>ordenFila;
    
    for(int j = 0; j < time; j++){
        for(int i = 0; i < ordenFila.length(); i++){
            if(ordenFila[i]=='B' && ordenFila[i+1]=='G'){
                int temp_SaveCaracter = ordenFila[i];
                ordenFila[i] = ordenFila[i + 1];
                ordenFila[i + 1] = temp_SaveCaracter;
                i = i + 1;
            }
        }
    }
    cout<<ordenFila;

        
}