#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int z = 0; z < totalCase; z++){
        int sizeString;
        cin >> sizeString;
        char hisName[5] = {'T','i','m','u','r'};
        string name, result;
        cin >> name;
        if(sizeString == 5){
            for(int i = 0; i < 5; i++){
                result = "NO";
                for(int j = 0; j < 5; j++){
                    if(hisName[i] == name[j]){
                        result = "YES";
                        break;
                    }
                }
                if(result == "NO"){
                    break;
                }      
            }
        }    
        else{
            cout << "NO";
        }
        cout << result << endl;
    }
}