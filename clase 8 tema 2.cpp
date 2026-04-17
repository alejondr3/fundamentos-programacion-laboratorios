#include <iostream>
using namespace std;

int main() {
    int numero, digito;
    int maxConsumo , minConsumo , cantidadMax;
    maxConsumo = 0;
    cantidadMax = 0;


    do {
        cout << "Ingrese el consumo de datos por dia:\n";
        cin >> numero;


        if (numero <= 0) {
            cout << "Numero invalido. Debe ser un numero entero positivo." << endl;
        }
    } while (numero <= 0);


    while (numero > 0) {
        digito = numero % 10;

        if (digito > maxConsumo) {
            maxConsumo = digito;
            cantidadMax = 1;
        } else if (digito == maxConsumo) {
            cantidadMax++;
        }


        if (digito < minConsumo) {
            minConsumo = digito;
        }

        numero /= 10;
    }


    cout << "Mayor consumo: " << maxConsumo << endl;
    cout << "Menor consumo: " << minConsumo << endl;
    cout << "Cantidad de veces que se repite el consumo maximo: " << cantidadMax << endl;

    return 0;
}
