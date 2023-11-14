#include <iostream>
using namespace std;

bool isPrime(int numb){
    for(int i = 2; i <= numb/2; i++){
        if(numb % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cin >> number;
    if(number % 4 == 0){
        cout << number / 2 << " " << number / 2 << endl;
    }
    else{
        int number1;
        int number2;
        number1 = number / 2;
        number2 = (number+1)/2;
        while(isPrime(number1) || isPrime(number2)){
            number1 --;
            number2 ++;
        }
        cout << number1 <<" " << number2 << endl;
    }   
}