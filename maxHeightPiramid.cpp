#include <iostream>
#include <setjmp.h>
using namespace std;
int sucTercerOrden(int pos){
    int cont = 0;
    for(int i = 1; i <= pos; i ++){
        cont+=i;
    }
    return cont;
}

int sumaOfsucTercer(int posSum){
    int result = 0;
    for(int i = 1; i <= posSum; i ++){
        result += sucTercerOrden(i);
    }
    return result;
}
int main() {
    int cubes,height = 1;
    cin >> cubes;
    int i = 1;
    while(sumaOfsucTercer(i) < cubes){
       height++; 
       i++;
       if(sumaOfsucTercer(i) > cubes){
        height--;
       }
    }
    cout << height ;
    
}