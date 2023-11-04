#include <iostream>
using namespace std;

int main() {
    int cantP, heightValla, heightFriend, widthMin=0;
    cin>>cantP>>heightValla;
    for(int i = 0; i < cantP; i++){
        cin>>heightFriend;
        if(heightFriend > heightValla){
            widthMin += 2;
        }
        else{
            widthMin += 1;
        }
    }
    cout<<widthMin;
    
}