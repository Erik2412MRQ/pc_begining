#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        string cadena;
        cin >> cadena;
        transform(cadena.begin(), cadena.end(), cadena.begin(), ::toupper);
        if(cadena == "YES"){
            cout << cadena << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }    
}