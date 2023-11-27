#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i ++){
        int totalCandies;
        cin >> totalCandies;
        int contador1 = 0, contador2 = 0;
        for(int j = 0; j < totalCandies; j ++){
            int candie;
            cin >> candie;
            if(candie == 1){
                contador1++;
            }
            else{
                contador2++;
            }
        }
        if((contador1 % 2 == 0 && contador2 % 2 == 0) || contador2 % 2 != 0  && contador1 % 2 == 0 && contador1 > 0){
            cout << "YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }   
}