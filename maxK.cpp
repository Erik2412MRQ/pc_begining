#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    for(int i = 0; i < testCase; i ++){
        int x,y,n;
        cin >> x >> y >> n;
        int valorMaxProxK = n / x;
        int valorRedondeado = valorMaxProxK * x;
        if( n < x){
            cout << y << endl;
        }
        else if(n % x  == y ){
            cout << n << endl;
        }
        else if( valorRedondeado + y < n){
            cout << valorRedondeado + y << endl;
        }
        else{
            int k = valorRedondeado - (x - y);
            cout << k << endl;
        }
    }    
}