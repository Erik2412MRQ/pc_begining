#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        int totalNumber;
        cin >> totalNumber;
        vector<int> listaNumber;
        for(int j = 0; j < totalNumber; j++){
            int number;
            cin >> number;
            listaNumber.push_back(number);
        }
        sort(listaNumber.begin(),listaNumber.end());
        cout << listaNumber[totalNumber-1] - listaNumber[0] << endl;
        
    }   
}