#include <iostream>
#include <algorithm>
using namespace std;

int sumOfArray (int array[], int sizeEle){
    int suma = 0;
    for(int i = 0; i < sizeEle; i ++){
       suma +=array[i];
    }
    return suma;
}

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        int sizeElements,maxMovi;
        cin >> sizeElements >> maxMovi;
        int array1[sizeElements], array2[sizeElements];
        for(int j = 0; j < 2; j ++){
            for(int z = 0; z < sizeElements; z++){
                if(j == 0){
                    cin >> array1[z];
                }
                else{
                    cin >> array2[z];
                }
            }
        }
        sort(array1, array1 + sizeElements);
        sort(array2, array2 + sizeElements, [] (int a, int b){
            return a > b;
        });

        int sumFirstArray = sumOfArray(array1, sizeElements);
        for(int j = 0; j < maxMovi; j++){
            if(array1[j] < array2[j]){
                sumFirstArray += array2[j] - array1[j];
            }
            else{
                break;
            }
        }
        cout << sumFirstArray << endl;



    }    
}