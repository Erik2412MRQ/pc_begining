#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase ; i ++){
        string word_ToDescrifrar;
        cin >> word_ToDescrifrar;
        if(word_ToDescrifrar.length() <= 2){
            cout << word_ToDescrifrar << endl;;
        }
        else{
            cout << word_ToDescrifrar[0];
            for(int j = 1; j < word_ToDescrifrar.length() -1; j+=2 ){
                cout << word_ToDescrifrar[j];
            }
            cout << word_ToDescrifrar[word_ToDescrifrar.length()-1] << endl;
        }
    }    
}