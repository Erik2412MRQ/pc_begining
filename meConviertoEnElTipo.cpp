#include <iostream>
using namespace std;

int main() {
    int levels, littleX, input, littleY, contador = 0;
    int levelForComplete[200];
    cin >> levels >> littleX;
    for(int i = 0; i < littleX; i ++){
        cin >> input;
        levelForComplete[i] = input;
        contador++;
    }
    cin >> littleY;
    for(int i = littleX; i < littleX+littleY; i++){
        cin>>input;
        levelForComplete[i] = input;
        contador++;
    }

    
    string result = "I become the guy.";

    for(int i = 1; i < levels+1; i++){
        for(int j = 0; j < contador; j++){
            if(i == levelForComplete[j]){
                result = "I become the guy.";
                break;
            }
            else{
                result ="Oh, my keyboard!";
            }
        }
        if(result == "Oh, my keyboard!"){
            break;
        }
    }
    
    if(littleX == 0 && littleY == 0 ){
        result = "Oh, my keyboard!";
    }
    cout << result;


}