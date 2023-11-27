#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i ++){
        int CaseMenor;
        cin >> CaseMenor;
        string arrayCaseM;
        cin >> arrayCaseM;
        cout << endl;
        string YesOrNo; 
        if(CaseMenor > 1){
            for(int j = 1; j < CaseMenor ; j ++){
                bool diferent = false;
                YesOrNo = "YES";
                if( arrayCaseM[j -1] != arrayCaseM[j]){
                    diferent = true;
                }
                if(diferent == true){
                    for(int z = j + 1; z < CaseMenor; z++){
                        if(arrayCaseM[j-1] == arrayCaseM[z]){
                            YesOrNo = "NO";
                            break;
                        }
                    }
                }
                if(YesOrNo == "NO"){
                    break;
                }
            }
            cout << YesOrNo;
        }
        else{
            cout << "YES";
        }
    }
    
}