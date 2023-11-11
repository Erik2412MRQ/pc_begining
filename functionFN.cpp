#include <iostream>
using namespace std;

int main() {
    long long casos;
    cin >> casos;
    if( casos % 2 == 0){
        cout << casos / 2;
    }
    else {
        cout << -1*(casos + 1) / 2;
    }    
}