#include <iostream>
#include <string>
using namespace std;


int main() {
    string word;
    int notRepeat = 0;
    getline(cin, word);
    for(int j = 97; j <= 122; j ++){
        for( long long w = 0; w < word.length(); w ++){
            if(word[w] == j){
                notRepeat++;
                break;
            }
        }
    }   
    cout << notRepeat;
}