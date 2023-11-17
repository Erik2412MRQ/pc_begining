#include <iostream>
using namespace std;

int main() {
    long long numberMayor = 0,a ,b , c, d;
    cin >> a >> b >> c >> d;

    long long matNumber[4] = {a,b,c,d};
    numberMayor = (a + b + c + d) / 3;
    
    for(int i = 0; i < 4; i ++){
        if(numberMayor - matNumber[i] > 0 ){
            cout << numberMayor - matNumber[i] << " ";
        }
    }

}