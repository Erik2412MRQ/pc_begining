#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int main() {
    int alumn, contM = 0,contP = 0,contPE = 0;
    cin >> alumn;
    vector<int> numberOfTalent;
    for(int i = 0; i < alumn; i++){
        int number;
        cin >> number;
        numberOfTalent.push_back(number);
        if(number == 1){
            contP ++;
        }
        else if(number == 2){
            contM ++;
        }
        else{
            contPE++;
        }
    }
    int minGroups = min(contP,min(contM,contPE));
    cout << minGroups << endl;
    bool pos1 = false, pos2 = false, pos3 = false;
    for(int i = 0; i < minGroups; i++){
       for(int j = 0; j < alumn; j ++){
            if(numberOfTalent[j] == 1 && pos1 == false){
                cout << j+1 <<" ";
                pos1 = true;
                numberOfTalent[j] = -1;
            }
            else if(numberOfTalent[j] == 2 && pos2 == false){
                cout << j+1 << " ";
                pos2 = true;
                numberOfTalent[j] = -1;
            }
            else if( numberOfTalent[j] == 3 && pos3 == false){
                cout << j+1 << " ";
                pos3 = true;
                numberOfTalent[j] = -1;
            }
      }
      cout << endl;
      pos1 = false;
      pos2 = false;
      pos3 = false;
    }
    
}