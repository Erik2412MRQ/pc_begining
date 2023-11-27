#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;    
    for(int j = 0; j < totalCase; j ++){
        int array[3];
        for(int i = 0; i < 3; i ++){
            cin >> array[i];
        } 
        int coinsPolicarpio;
        cin >> coinsPolicarpio;
        sort(array,array+3);
        int contadorSisterCoins = 0;
        for(int i = 0; i < 2; i ++){
            contadorSisterCoins+= array[2] - array[i];
        }
        if(contadorSisterCoins <= coinsPolicarpio){
            int result = coinsPolicarpio - contadorSisterCoins;
            if(result % 3 == 0){
                cout << "YES"<< endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}