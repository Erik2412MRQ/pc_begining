#include <iostream>
using namespace std;

int main() {
    char number_str[20];
    long long number;
    long long cont_LuckyNumber = 0;
    cin >> number_str;    
    sscanf_s(number_str, "%lld", &number);
    while(number != 0){
        if( number % 10 == 4 || number % 10 == 7){
            cont_LuckyNumber++;
        }
        number = number / 10; 
    }
    string IsLucky = "NO";
    while(cont_LuckyNumber!= 0){
        if(cont_LuckyNumber % 10 !=4 && cont_LuckyNumber % 10 != 7){
            IsLucky = "NO";
            break;
        }
        cont_LuckyNumber = cont_LuckyNumber / 10;
        if(cont_LuckyNumber==0){
            IsLucky = "YES";
        }
    }
    cout<<IsLucky;
}
