#include <algorithm>
#include <iostream>
using namespace std;



int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        int sizeArray;
        cin >> sizeArray;
        int listSizeArray1[sizeArray],listSizeArray2[sizeArray];
        for(int j = 0; j < sizeArray; j ++){
            cin >> listSizeArray1[j];
        }
        for(int j = 0; j < sizeArray; j ++){
            cin >> listSizeArray2[j];
        }
        long long contador = 0;
        long long minEleArray1 = *min_element(listSizeArray1,listSizeArray1 + sizeArray); 
        long long minEleArray2 = *min_element(listSizeArray2,listSizeArray2 + sizeArray);
        for(int j = 0; j < sizeArray; j ++){
            if(listSizeArray1[j] - minEleArray1 > listSizeArray2[j]- minEleArray2){
                contador += listSizeArray2[j] - minEleArray2;
                contador += listSizeArray1[j] - (listSizeArray2[j] - minEleArray2) - minEleArray1;
            }
            else{
                contador += listSizeArray1[j] - minEleArray1;  
                contador += listSizeArray2[j] - (listSizeArray1[j] - minEleArray1) - minEleArray2;
            }
        }
        cout << contador << endl;
    }    
}