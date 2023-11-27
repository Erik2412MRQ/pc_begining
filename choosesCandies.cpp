#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;

    for(int i = 0; i < totalCase; i++){
        int CaseOfTotalCase,cont = 0;
        cin >> CaseOfTotalCase;
        vector<float> candiesForFriend;
        for(int j = 0; j < CaseOfTotalCase; j++){
           int candies;
           cin >> candies;
           cont+= candies;
           candiesForFriend.push_back(candies); 
        }
        int media = cont % CaseOfTotalCase, centro = cont/ CaseOfTotalCase;
        cont = 0;
            
        if(media == 0){
           for(int z = 0; z < CaseOfTotalCase; z ++){
                if(candiesForFriend[z] > centro ){
                    cont++ ;
                }
           } 
           cout << cont << endl;
        }
        else{
            cont = -1;
            cout << cont << endl;
        }

    }
    
}