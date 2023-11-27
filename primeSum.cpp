#include <iostream>
using namespace std;

int main() {
    int sumTotal;
    cin >> sumTotal;
    if(sumTotal % 2 == 0){
        cout << sumTotal / 2 << endl;
        for(int i = 0; i < sumTotal/2; i ++){
            cout << 2 <<" ";
        }
        cout << endl;
    }    
    else{
        if(sumTotal == 3){
            cout << 1 << endl;
            cout << 3 << endl; 
        }
        else{
            int numbers = (sumTotal-3) / 2   + 1;
            cout << numbers << endl;
            for(int i = 0; i < numbers - 1; i++ ){
                cout << 2 << " "; 
            }
            cout << 3 << endl;
        }
    }
}