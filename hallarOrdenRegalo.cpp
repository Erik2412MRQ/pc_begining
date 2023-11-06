#include <iostream>
using namespace std;

int main() {
    int number_friends;
    cin>>number_friends;
    int arrayFriends[number_friends];
    for(int i = 0; i < number_friends; i++){
        cin>>arrayFriends[i];
    } 
    for(int i = 0; i < number_friends; i++){
        for(int j = 0 ; j < number_friends; j++){
            if(i+1 == arrayFriends[j]){
                cout << j + 1;
                break;
            }
        }
        cout<<" ";
    }

}