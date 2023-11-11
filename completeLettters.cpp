#include <algorithm>
#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string totalInvitados,firstInvitados,secondInvitado, output = "YES";
    cin >> firstInvitados >> secondInvitado >> totalInvitados;
    int sizeFI = firstInvitados.length(), sizeSI = secondInvitado.length(), sizeTotal = totalInvitados.length();
    if(sizeFI + sizeSI == sizeTotal){
        char acharAComparar[sizeFI+sizeSI+1], acharTotal[sizeTotal+1];
        string NuevoAcomparar = firstInvitados + secondInvitado;
        strcpy_s(acharAComparar,sizeof(acharAComparar),NuevoAcomparar.c_str());
        strcpy_s(acharTotal,sizeof(acharTotal),totalInvitados.c_str());
         
        sort(acharAComparar,acharAComparar+sizeTotal);
        sort(acharTotal,acharTotal+sizeTotal);
        
        for(int i = 0; i < sizeTotal; i ++){
            if(acharAComparar[i] != acharTotal[i]){
                output = "NO";
                break;
            }
        }



    }
    else{
        output = "NO";
    }

    cout << output;
 
}