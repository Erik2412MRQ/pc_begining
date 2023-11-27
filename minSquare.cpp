#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        int minN, maxN;
        {
        int firstN, secondN;
        cin >> firstN >> secondN;
        minN = min(firstN,secondN);
        maxN = max(firstN,secondN);
        }
        if(2*minN == maxN || 2*minN > maxN){
            cout << 4*minN*minN << endl;
        }

        else if(2*minN < maxN){
            cout << maxN * maxN << endl;
        }
        else if(minN == maxN){
            minN*=2;
            cout << 4*minN*minN << endl;
        }
    }
}