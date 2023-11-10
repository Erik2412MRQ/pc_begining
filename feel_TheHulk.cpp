#include <iostream>
using namespace std;

int main() {
    int capaN;
    cin >> capaN;
    string final_Feel = "";
    for(int i = 0; i < capaN; i ++){
        if(i % 2 == 0 and i != capaN - 1){
            final_Feel += "I hate that ";   
        }
        else if((i % 2 != 0) && (i != capaN - 1)){
            final_Feel += "I love that ";
        }
        if (i == capaN - 1){
            if( i % 2 == 0){
                final_Feel+="I hate";
            }
            else{
                final_Feel += "I love";
            }

            final_Feel+= " it";
        }

    }
    cout << final_Feel;

}