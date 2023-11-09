#include <iostream>
using namespace std;

int main() {
    int total_Triangle = 0, numberFig, trianglesForFigure[5] = {4, 6, 8, 12, 20};
    string nameFig, nameOfFIgure[5] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
    cin >> numberFig;
    for(int i = 0; i < numberFig; i++){
        cin >> nameFig;
        for(int j = 0; j < 5; j++){
            if(nameFig == nameOfFIgure[j]){
                total_Triangle += trianglesForFigure[j];
                break;
            }
        }
    }
    cout << total_Triangle;
}