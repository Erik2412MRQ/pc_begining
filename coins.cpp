#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i ++){
        int coins;
        cin >> coins;
        int result = coins / 3;
        if(coins % 3 == 0){  
            cout << result <<" "<< result << endl;
        }
        else if( coins % 3 == 1){
            cout << result + 1 << " " << result << endl;
        }
        else {
            cout << result << " " << result + 1 << endl;
        }
    }    
}