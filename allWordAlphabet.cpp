#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int sizeOfString;
    bool IsorNoIs = false;
    cin >> sizeOfString;
    char word[sizeOfString];
    for(int i = 0; i < sizeOfString ; i ++){
        cin >> word[i];
    }
    if( sizeOfString >= 25){
        for(int j = 97 ; j <= 122; j ++){
            for(int i = 0; i < sizeOfString; i ++ ){
                if(tolower(word[i]) == j){
                    IsorNoIs = true;
                    break;
                }
            }
            if(IsorNoIs == false){
                break;
            }
            if( j <= 121){
                IsorNoIs = false;
            }
        }    
    }
    if(IsorNoIs == true){
        cout << "YES";
    }   
    else{
        cout << "NO";
    }
}