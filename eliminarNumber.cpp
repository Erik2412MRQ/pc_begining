#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t_casos;
    cin >> t_casos;
    for(int i = 0; i < t_casos; i ++){
        int n_casos_DelPrimerCaso,first_Case;
        cin >> n_casos_DelPrimerCaso;
        vector<int> casosPrueba;
        string valorOutPut = "YES";
        for(int j = 0; j < n_casos_DelPrimerCaso; j ++){
            cin >> first_Case;
            casosPrueba.push_back(first_Case);
        }
        sort(casosPrueba.begin(), casosPrueba.end());

        for(int k = 1; k < casosPrueba.size(); k++){
            if(casosPrueba[k-1] != casosPrueba[k] && casosPrueba[k-1] + 1 != casosPrueba[k]){
                valorOutPut = "NO";
                break;
            }
        }

        cout << valorOutPut << endl;
    }    
}