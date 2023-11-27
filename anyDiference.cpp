#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i ++) {
        int teste;
        cin >> teste;
        int array[teste] ;
        for(int j = 0; j < teste; j ++){
           cin >> array[j];
        }
        sort(array, array + teste);
        int menor = array[teste-1] - array[teste-2];
        if(menor > 0){
            for(int j = teste-2; j >0; j -- ){
               int aux = array[j] - array[j-1];
               if(menor > aux){
                menor = aux;
               } 
               if(menor == 0){
                break;
               }
            }
        }
        cout << menor << endl;

    }   
}