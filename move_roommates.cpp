#include <iostream>
using namespace std;

int main() {
    int numberOfRooms;
    cin>>numberOfRooms;
    int free_Space=0, TotalSpace, busySpace;
    for(int i = 0; i < numberOfRooms; i++){
        cin>>busySpace>>TotalSpace;
        if(TotalSpace-busySpace>=2){
            free_Space++;
        }
    }
    cout<<free_Space;
}