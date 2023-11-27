#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++ ){
        int Casos;
        cin >> Casos;
        vector <float> valores;
        for(int j = 0; j < Casos; j ++){
            float number;
            cin >> number;
            valores.push_back(number);
        }
        int cont = 0;
        if(Casos > 1) {
            for(int j = 0; j < Casos; j++){
                for(int z = j + 1; z < Casos; z ++){
                    
                    if(valores[j] / valores[z]== float(pow(2,valores[j] - valores[z]))){
                        cont++;
                    }
                }
            }
            cout <<cont << endl;
        }
        else{
            cout <<  0 << endl;
        }

        

    }
}   