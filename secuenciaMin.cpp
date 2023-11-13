#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int n_casos;
    cin >> n_casos;
    for(int i = 0; i < n_casos ; i++){
        int first_number, second_number;
        cin >> first_number >> second_number;
        if(first_number != second_number){
            if( abs(first_number - second_number) > 10  &&   abs(first_number - second_number) % 10 != 0){
                cout << abs(first_number - second_number)/10  + 1 << endl;
            }
            else if( abs(first_number - second_number) % 10 == 0){
                cout << abs(first_number - second_number) / 10 << endl;
            }
            else if(abs(first_number - second_number) < 10){
                cout << 1 << endl;
            }
        }
        else{
            cout << 0 << endl;
        }
    }    
}