#include <iostream>
using namespace std;

int main() {
    int total_problems, timeOfHouse, siPuedeResolver = 0;
    cin >> total_problems >> timeOfHouse;

    for(int i = total_problems; i > 0; i--){
        if( 5*(i*(i+1))/2 + timeOfHouse <= 240 ){
            siPuedeResolver = i;
            break;
        }        
    }\
    cout << siPuedeResolver;    
}