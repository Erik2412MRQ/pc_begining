#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstP,secondP;
    cin>>firstP>>secondP;
    string TorF= "YES";
    for(int i = 0; i < firstP.length(); i++){
        if(firstP[i]!=secondP[secondP.length()-i-1]){
            TorF="NO";
            break;
        }
    }
    cout<<TorF;
}