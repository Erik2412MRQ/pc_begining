#include <iostream>
using namespace std;
int main(){
    int number, k;
    cin>>number;
    cin>>k;
    for(int i = 0; i < k; i++){
       if(number % 10 == 0){
        number = number/10;
       }
       else{
        number=number-1;
       }
    }
    cout<<number;
}