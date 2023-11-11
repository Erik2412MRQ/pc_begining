#include <iostream>
using namespace std;

int main() {
    int totalCase,casosSinResolver = 0,PoliciasReclutadosOrCrimen,sumaTotal = 0;
    cin >>totalCase>> PoliciasReclutadosOrCrimen;
    if(PoliciasReclutadosOrCrimen == -1){
        casosSinResolver++;
    }
    else{
        sumaTotal+=PoliciasReclutadosOrCrimen;
    }
    for(int i = 0; i < totalCase-1; i ++){
        cin >> PoliciasReclutadosOrCrimen;
        
        if(PoliciasReclutadosOrCrimen < 0 && sumaTotal > 0){
            sumaTotal += PoliciasReclutadosOrCrimen;
            if(sumaTotal < 0){

                casosSinResolver++;
                sumaTotal = 0;
            }
        }
        else if(PoliciasReclutadosOrCrimen > 0){

            sumaTotal += PoliciasReclutadosOrCrimen;  
        }
        else if(PoliciasReclutadosOrCrimen < 0 && sumaTotal == 0){
            casosSinResolver++;
        }
    }
    cout << casosSinResolver;
}