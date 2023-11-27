#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    int array[4];
    for(int i = 0; i < totalCase; i++){
        for(int j = 0; j < 4; j++){
            cin >> array[j];
        }
        bool iforNo = false;
        for(int j = 0; j < 2; j++){
            if(array[j] >= array[2]   && array[j] <= array[3]){
                iforNo = true;
                break;
            }

            else if(array[j] >= array[3] && array[j] <= array[2]){
                iforNo = true;
                break;
            }
            else if(array[j] > array[2] && array[j] > array[3]){
                if(j == 0 && array[j+1] <= array[2] && array[j+1] <= array[3]){
                    iforNo = true;
                    break;
                }
                else if( j == 1 && array[j-1] <= array[2] && array[j-1] <= array[3]){
                    iforNo = true;
                    break;
                }
            }
            
        }
        if(iforNo == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }    
}