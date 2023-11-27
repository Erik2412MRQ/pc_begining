#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i ++){
        int contador = 1;
        int apartamentoOfPetia, numberApartForFloor;
        cin >> apartamentoOfPetia >> numberApartForFloor;
        if(apartamentoOfPetia <= numberApartForFloor && apartamentoOfPetia <= 2){
            cout << 1 << endl;
        }
        else{
            if((apartamentoOfPetia - 2) % numberApartForFloor != 0){
                cout << ((apartamentoOfPetia - 2) / numberApartForFloor) + 2 << endl;
            }
            else{
                cout << ((apartamentoOfPetia - 2) / numberApartForFloor) + 1 << endl;
            }

        }
    }
    
}