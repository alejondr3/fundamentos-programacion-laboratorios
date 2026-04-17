#include <iostream>
using namespace std;

int main() {
    int numero, digito, totalhoras, aplicaciones, contador, promedio;


    do {
        totalhoras = 0;
        aplicaciones = 0;
        contador = 0;

        cout << "Ingrese el numero de horas por aplicacion: ";
        cin >> numero;


        if (numero <= 0) {
            cout << "Numero invalido. Debe ser un numero entero positivo.\n";
        }

    } while (numero <= 0);


    while (numero > 0) {
        digito = numero % 10;
        totalhoras += digito;
        if (digito > 5) {
            aplicaciones++;
        }
        contador++;
        numero /= 10;
    }


    promedio = totalhoras / contador;


    cout << "Total de horas utilizadas: " << totalhoras << endl;
    cout << "Cantidad de aplicaciones con mas de 5 horas: " << aplicaciones << endl;
    cout << "Promedio de horas por aplicacion: " << promedio << endl;

    return 0;
}
