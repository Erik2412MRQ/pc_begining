#include <iostream>
#include <vector>
using namespace std;

int main() {
    int totalCase;
    vector<int> cumplenCondicion;

    for(int i = 1; cumplenCondicion.size() < 1000; i++){
        if(i % 3 != 0 && i % 10 != 3){
            cumplenCondicion.push_back(i);
        }
    }
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        int pos;
        cin >> pos;
        cout << cumplenCondicion[pos-1] << endl;
    }

}