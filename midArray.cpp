#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        vector<int> numeros;
        for(int j = 0; j < 3; j++){
            int number;
            cin >> number;
            numeros.push_back(number);
        }
        sort(numeros.begin(), numeros.end());
        cout << numeros[1] << endl;
    }   
}