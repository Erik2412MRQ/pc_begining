#include <iostream>
using namespace std;

int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i++){
        int hours, minute;
        cin >> hours >> minute;
        cout << (23 - hours)* 60 + 60-minute << endl;
    }    
}