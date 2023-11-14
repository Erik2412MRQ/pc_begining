#include <iostream>
using namespace std;

int main() {
    int cartas;
    cin >> cartas;
    int arrayCartas[cartas];
    for(int i = 0; i < cartas; i ++){
        cin >> arrayCartas[i];
    }
    int* punter1, *punter2;
    punter1 = &arrayCartas[0];
    punter2 = &arrayCartas[cartas-1];
    int SerejaOrDima = 0, Sereja = 0, Dima = 0;
    while(punter1 != punter2){
        if(SerejaOrDima % 2 == 0){
            if(*punter1 > *punter2){
                Sereja += *punter1;
                punter1++;
            }
            else{
                Sereja += *punter2;
                punter2 --;
            }
        }
        else{
            if(*punter1 > *punter2){
                Dima+= *punter1;
                punter1 ++;
            }
            else{
                Dima += *punter2;
                punter2 --;
            }             
        }
        SerejaOrDima++;
    }
    if(SerejaOrDima % 2 == 0){
        Sereja += *punter1;
    }  
    else{
        Dima += *punter2;
    }
    cout << Sereja << " "<< Dima << endl;  
}