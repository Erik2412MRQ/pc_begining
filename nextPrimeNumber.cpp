#include <iostream>
using namespace std;

bool isPrime(int number){
    bool es = true;
    for(int i = 2; i <= number/2; i++){
        if(number % i == 0){
            es = false;
        }
    }
    return es;
}

void nextPrime(int firstN, int secondN){
    string resul = "YES";
    for(int i = firstN + 1; i < secondN; i ++) { 
        bool noes = isPrime(i);
        if(noes == true){
            resul = "NO";
            break;
        }
    } 
    cout << resul << endl;
}

int main() {
    int firstN, secondN;
    cin >> firstN >> secondN;
    if(isPrime(secondN)){
        nextPrime(firstN, secondN);
    }
    else{
        cout << "NO" << endl;
    }
    
}