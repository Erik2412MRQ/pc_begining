#include <iostream>
using namespace std;

int main() {
    int personCuestion;
    cin>>personCuestion;
    string isHardOrDificul = "EASY";
    for(int i = 0; i < personCuestion; i++){
        int person_i;
        cin>>person_i;
        if(person_i != 0){
            isHardOrDificul = "HARD";
            break;
        }
    }    
    cout << isHardOrDificul;
}