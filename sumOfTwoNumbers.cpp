#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i ++){
        vector <int> threeNumbers;
        for(int j = 0; j < 3; j ++){
            int number;
            cin >> number;
            threeNumbers.push_back(number);
        }
        sort(threeNumbers.begin(),threeNumbers.end());

        if(threeNumbers[0] + threeNumbers[1] == threeNumbers[2]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }    
}