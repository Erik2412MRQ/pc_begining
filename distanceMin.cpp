#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    //Ordenamiento con arreglos
    int lista[3] = {a,b,c};
    sort(lista,lista+3);
    int result = abs(lista[0] - lista[1]) + abs(lista[1] - lista[2]);
    cout << result;

    //ordenamiento con vectores
    vector<int> numbV = {a,b,c};

    sort(numbV.begin(), numbV.end());
      
    for( int i = 0; i < numbV.size(); i++){
        cout <<numbV[i] << " ";
    }
    


}