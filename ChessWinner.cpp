#include <map>
#include <iostream>
using namespace std;

int main() {
    int n_partidas,contA=0,contD=0;
    string wPartida;
    cin>>n_partidas;
    cin>>wPartida;
    for(int i = 0; i < n_partidas; i++){
        if(wPartida[i]=='A'){
            contA++;
        }
        else{
            contD++;
        }
    }
    if(contA == contD){
        cout<<"Friendship";
    }
    else if(contA>contD){
        cout<<"Anton";
    }
    else{
        cout<<"Danik";
    }
}