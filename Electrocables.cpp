
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define TAM 50

int main()
{

    int puntos_de_red = 0, distancia = 0, conectores = 0, distancia_sumatoria = 0, conectores_sumatoria = 0, c;
    string lugar;
    cout << "\t *** Empresa electrocables ***\n\n";
    cout << "\t Este es un software contable    \n\n ";
    cout << "   Ingrese el nombre del lugar de la instlacion " << endl;
    cin >> lugar;
    cout << "   Ingrese el numero de puntos de red que van hacer instalados" << endl;
    cin >> puntos_de_red;
    for (int i = 1; i <= puntos_de_red; i++)
    {
        cout << "Punto de red #" << i << endl;
        cout << "Ingrese la distancia entre el conector del punto de red hasta el equipo de conectividad " << endl;
        cin >> distancia;
        distancia_sumatoria = distancia + distancia_sumatoria;
        cout << "Ingrese el numero de conectores para el punto de red: " << endl;
        cin >> conectores;
        conectores_sumatoria = conectores + conectores_sumatoria;
    }
    cout << "\tEl detalle de la instlacion es la siguiente \n\n";

    cout << "La distancia total del cable utilizado en la instalacion : " << fixed << setprecision(2) << distancia_sumatoria * 1.05 << endl;
    cout << "El costo del cable segun la categoria 5e es : " << fixed << setprecision(2) << distancia_sumatoria * 0.9 << endl;
    cout << "El precio total de los conectores RJ45 (hembra y macho) es : " << fixed << setprecision(2) << conectores_sumatoria * 3.45 << endl;
    cout << "El total del material utilizado es : " << fixed << setprecision(2) << (distancia_sumatoria * 0.9) + (conectores_sumatoria * 3.45) << endl;
    cout << "La ganacia es  " << fixed << setprecision(2) << ((distancia_sumatoria * 0.9) + (conectores_sumatoria * 3.45)) * 0.45 << endl;
    cout << "El total a pagar por su instlacion es : " << fixed << setprecision(2) << ((distancia_sumatoria * 0.9) + (conectores_sumatoria * 3.45)) * 1.45 << endl;
    return 0;
}
