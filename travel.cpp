#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int yakko, wakko;
    cin >> yakko >> wakko;
    int valorMax = max(yakko, wakko);
    int denominador = (7 - valorMax );
    if(denominador % 6 == 0){
        cout << 1 << "/" << 1;
    }
    else if( denominador % 3 == 0){
        cout  << denominador / 3 << "/" << 2;
    }
    else if(denominador % 2 == 0){
        cout << denominador / 2 << "/" << 3;
    }
    else{
        cout << denominador << "/" << 6;
    }

}