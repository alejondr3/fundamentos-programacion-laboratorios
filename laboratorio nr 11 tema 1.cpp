#include <iostream>
#include <cmath>

using namespace std;

void leerDatos(double &base, double &exponente);
double POTEN(double x, double y);
void mostrarResultado(double base, double exponente, double resultado);

int main() {
    double base, exponente, resultado;

    leerDatos(base, exponente);
    resultado = POTEN(base, exponente);
    mostrarResultado(base, exponente, resultado);

    return 0;
}

void leerDatos(double &base, double &exponente) {
    cout << "Ingrese el valor de la base: ";
    cin >> base;
    cout << "Ingrese el valor del exponente: ";
    cin >> exponente;
}

double POTEN(double x, double y) {
    return pow(x, y);
}

void mostrarResultado(double base, double exponente, double resultado) {
    cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultado << endl;
}
