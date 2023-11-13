#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n_Personas, k_mililitros, l_Botellas, c_limas, d_rodajas_D_Lima, p_gr_Sal,nl_litroPorPersona, np_salPorPersona;
    cin >> n_Personas >> k_mililitros >> l_Botellas >> c_limas >> d_rodajas_D_Lima >> p_gr_Sal >> nl_litroPorPersona >> np_salPorPersona;

    int rondas_De_botellas = (k_mililitros * l_Botellas) / nl_litroPorPersona;
    int rondas_De_Sal = (p_gr_Sal / np_salPorPersona);
    int rondas_De_limas = (c_limas * d_rodajas_D_Lima);
    int number_min =min(rondas_De_limas,(min(rondas_De_botellas,rondas_De_Sal)));
    
    cout << number_min / n_Personas;

}