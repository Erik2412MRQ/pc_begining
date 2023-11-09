#include <iostream>
using namespace std;

int main() {
    int total_Teams, answer = 0;
    cin >> total_Teams;
    int colorAnfitrion[total_Teams], colorInvitado[total_Teams];
    for(int i = 0; i < total_Teams; i ++){
        cin >> colorAnfitrion[i];
        cin >> colorInvitado[i];
    }
    for(int i = 0; i < total_Teams; i++){
        for(int j = 0; j < total_Teams; j++){
            if(colorInvitado[i] == colorAnfitrion[j]){
                answer++;
            }
        }
    }
    cout << answer;    
}