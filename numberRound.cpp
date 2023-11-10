 #include <iostream>
 #include <math.h>
 using namespace std;
 
 int main() {
    int totalCase;
    cin >> totalCase;
    for(int i = 0; i < totalCase; i ++){
        int number,tempNumber, TotalCifras = 1,totalDivisiones = 0;
        cin >> number;
        tempNumber = number;
        while( tempNumber / 10 != 0){
            TotalCifras++;
            tempNumber /= 10;
        }
        tempNumber = number;
        int Temp_totalCifras = TotalCifras; 
        while( tempNumber / 10 != 0){
            if(tempNumber / int(pow(10,Temp_totalCifras - 1)) != 0){
                totalDivisiones ++;
            }

            Temp_totalCifras --;
            tempNumber %= int(pow(10,Temp_totalCifras));
            if(tempNumber < 10 && tempNumber != 0){
                totalDivisiones ++;
            }
            
        }
        if(number < 10 && tempNumber!=0){
            totalDivisiones++;
        }

        cout << totalDivisiones <<endl;
        for(int j = TotalCifras - 1; j >= 0; j --){
            if( number / int (pow(10,j)) != 0){
                cout << ((number / int(pow(10, j))) * int(pow(10,j))) <<" ";
            }
            
            number = number % int(pow(10, j));
        }
        cout << endl;
    }    
 }