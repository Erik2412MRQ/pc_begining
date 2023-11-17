#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        int raiting;
        cin >> raiting;
        if(raiting <= 1399){
            cout << "Division 4" << endl;
        }
        else if( raiting <= 1599){
            cout << "Division 3" << endl;
        }
        else if ( raiting <= 1899){
            cout << "Division 2" << endl;
        }
        else{
            cout << "Division 1" << endl;
        }
    }    
}