#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int j = 0; j < totalCase; j ++){
        string word;
        cin >> word;    
        if(word.length() % 2 == 0){
            string result = "YES";
            int segunPos = word.length() / 2;
            for(int i = 0; i < word.length() / 2; i ++){
                if(word[i] != word[i + segunPos]){
                    result = "NO";
                    break;
                }
            }
            cout << result << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}