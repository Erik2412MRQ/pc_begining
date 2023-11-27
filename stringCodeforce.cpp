#include <iostream>
using namespace std;

int main() {
    int totalChar;
    cin >> totalChar;
    string ScodeF = "codeforces";
    for(int i = 0; i < totalChar; i ++) 
    { 
        char carac;
        string booleaCompro = "NO";
         cin >> carac;
        for(int j = 0; j < ScodeF.length(); j ++ )
        {
           if(carac == ScodeF[j])
           {
            booleaCompro = "YES";
            cout << booleaCompro << endl;
            break;
           }
        }
        if(booleaCompro == "NO"){
            cout << booleaCompro << endl;
        }
        booleaCompro = "NO";
    }    
}