#include <iostream>
#include <vector>
using namespace std;

int main() {
    int casosTotal;
    cin >> casosTotal;
    for (int i = 0; i < casosTotal; i ++){
        int casosDivisionTwo;
        cin >> casosDivisionTwo;
        vector<int> vectorOfNumbers;
        for(int j = 0; j < casosDivisionTwo; j ++){
            int numberToVector;
            cin >> numberToVector;
            vectorOfNumbers.push_back(numberToVector);
        }
        for(int j = 1; j < casosDivisionTwo; j ++){
            if(j == 1 && vectorOfNumbers[0] != vectorOfNumbers[casosDivisionTwo - j]){
                if(vectorOfNumbers[0] == vectorOfNumbers[casosDivisionTwo - j - 1] ){
                    cout << casosDivisionTwo - j + 1 << endl;
                    break;
                }
                else{
                    cout << 1 << endl;
                    break;
                }
            }
            else if(vectorOfNumbers[0] != vectorOfNumbers[casosDivisionTwo - j]){
                cout << casosDivisionTwo - j + 1 << endl;
                break;
            }
        }
    }    
}