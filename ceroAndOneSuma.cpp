#include <iostream>
using namespace std;

int main() {
    string number1, number2, result = "";
    cin>> number1 >> number2;

    for(int i = 0; i < number1.length(); i ++){
        if(number1[i] == number2[i]){
            result += "0";
        }
        else{
            result += "1";
        }
    } 
    cout<<result;   
}