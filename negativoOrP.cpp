#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;

    for(int i = 0; i < totalCase; i++){
        int arrayNumber[3];
        for(int j = 0; j < 3; j++){
            cin >> arrayNumber[j];
        }
        if(arrayNumber[0] - arrayNumber[1] == arrayNumber[2]){
            cout << "-" << endl;
        }
        else{
            cout << "+" << endl;
        }
    }  
}