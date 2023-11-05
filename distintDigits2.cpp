#include <iostream>
using namespace std;

int main() {
    int number;
    cin>>number;
    number++;
    bool number_IsDisint = false;
    while(number_IsDisint == false){
            int a=number/1000,b=(number%1000)/100,c=(number%100)/10, d=number%10;
            if((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d)){
                number_IsDisint = true;
                break;
            }
            number++;

    }
    cout<<number;
    
}