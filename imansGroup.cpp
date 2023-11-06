#include <iostream>
using namespace std;

int main() {
    int number_OfImans, save_ultimateValue = 0, cargaDelIman, cont_Group = 1;
    cin>>number_OfImans>>cargaDelIman;
    save_ultimateValue = cargaDelIman;
    for(int i = 0; i < number_OfImans - 1; i++){
         cin>>cargaDelIman;
         if(cargaDelIman != save_ultimateValue){
            cont_Group++;
            save_ultimateValue = cargaDelIman;
         } 
    }
    cout<<cont_Group;
}