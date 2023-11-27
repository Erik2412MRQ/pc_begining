#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++) {
        int number;
        cin >> number;
        if(number % 2 == 0){
            cout << number/2 << endl;
        }
        else{
            cout << (number-1)/2 <<endl;
        }
    }   
}