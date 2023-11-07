#include <iostream>
using namespace std;

int main() {
    int color_ofHorseShoe[4], BuyMinim = 0;
    
    for(int i = 0; i < 4; i++){
        cin>>color_ofHorseShoe[i];
        for(int j = i; j > 0; j--){
            if(color_ofHorseShoe[i] == color_ofHorseShoe[j-1]){
                BuyMinim++;
                break;
            }
        }
    }
    cout << BuyMinim;

}