#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        int cont_Pmitad =0,cont_Smitad = 0;
        int number;
        cin >> number;
        for(int j = 0; j < 6; j++){
           if(j < 3){
            cont_Pmitad += number % 10;
            number /= 10;
           } 
           else{
            cont_Smitad += number % 10;
            number /= 10;
           }
        }
        if(cont_Pmitad == cont_Smitad){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }    
}