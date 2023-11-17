#include <iostream>
using namespace std;

int main() {
    int totalCase, cantWinM = 0, cantWinC = 0;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++ ){
       int dado1, dado2;
       cin >> dado1 >> dado2;  
       if (dado1 > dado2){
        cantWinM ++;
       }
       else if (dado1 < dado2) {
        cantWinC++;
       }
    }
    if( cantWinC > cantWinM ){
        cout << "Chris";
    }
    else if ( cantWinM > cantWinC ){
        cout << "Mishka";
    } 
    else{
        cout << "Friendship is magic!^^";
    }
}