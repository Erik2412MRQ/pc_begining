#include <iostream>
using namespace std;
int main() {
    int casos;
    cin >> casos;
    for(int i = 0; i <casos; i ++){
        int number;
        cin >> number; 
        if(number % 4 == 0 && number != 2){
            cout <<"YES" << endl;
            int sumPar = (number/2)*(2 + number) / 2;
            int impar = (number/2 - 1) * (1 + number - 3) / 2;
            int ultimoImpar = sumPar - impar;
            for(int j = 2; j <= number; j +=2){
                cout << j << " "; 

            }
            for(int  j = 1; j < number - 1; j+=2){
                cout << j << " ";
            }
            cout << ultimoImpar << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}