#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        int number;
        cin >> number;
        if( number % 3 == 0){
            cout << "Second" << endl;
            
        }
        else {
            cout <<"First" << endl;
        } 
    }    
}