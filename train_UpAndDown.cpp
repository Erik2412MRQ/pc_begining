#include <iostream>
using namespace std;

int main() {
    int paradas,up,down,testMinC=0,minCapcity=0;
    cin>>paradas;
    for(int i = 0; i < paradas; i++){
        cin>>down>>up;
        testMinC=testMinC + (up-down);
        if(testMinC>minCapcity){
            minCapcity=testMinC;
        }
        
    } 

    cout<<minCapcity;
}