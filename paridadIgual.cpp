#include <iostream>
using namespace std;

int main() {
    int totalcase;
    cin >> totalcase;
    for(int i = 0; i < totalcase; i++)
    {
        int cast, contador = 0;
        cin >> cast;
        int mat[cast];

        for(int j = 0; j < cast; j++)
        {
            cin >> mat[j]; 
        }

        for(int j = 0; j < cast; j ++)
        {
           bool existe = false;
           if(mat[j] % 2 != 0 && j % 2 == 0)
           {
                for(int z = j + 1 ; z < cast; z ++){
                    
                    if(mat[z] % 2 == 0 && z % 2 != 0)
                    
                    {
                        int aux = mat[j];
                        mat[j] = mat[z];
                        mat[z] = aux;
                        existe = true;
                        contador++;
                        break;
                    }
                }
                if(existe == false){
                    contador = -1;
                }
           }
           else if( mat[j] % 2 == 0 && j % 2 != 0 ){
                for(int z = j + 1; z < cast; z++)
                {
                    if(mat[z] % 2 != 0 && z % 2 == 0){
                        int aux = mat[j];
                        mat[j] = mat[z];
                        mat[z] = aux;
                        existe = true;
                        contador++;
                        break;
                    }
                    
                }
                if(existe == false){
                    contador = -1;
                }
           } 
            if(contador == -1)
            {
                break;
            }
            existe = false;
        }
    cout << contador << endl;
    }    
}