#include <iostream>
using namespace std;

int main() {
    int casos = 0;
    cin >> casos;
    int arrayResult[casos];    
    for(int i = 0; i < casos; i++){
        int number1, number2, result = 0;
        cin >> number1 >> number2;
        result = number2  - (number1 % number2);
        if(number1 % number2 == 0){
            result = 0;
        }
        arrayResult[i] = result;
    }    
    for(int i = 0; i < casos; i ++){
        cout << arrayResult[i] << endl;
    }
}