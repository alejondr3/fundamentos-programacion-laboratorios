#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void leerDatos(double &R, int &n);
double redondear(double R, int n);
void mostrarResultado(double resultado, int n);

int main() {
    double R;
    int n;
    double resultado;

    leerDatos(R, n);
    resultado = redondear(R, n);
    mostrarResultado(resultado, n);

    return 0;
}

void leerDatos(double &R, int &n) {
    cout << "Ingrese el numero real (R): ";
    cin >> R;
    cout << "Ingrese la cantidad de decimales (n): ";
    cin >> n;
}

double redondear(double R, int n) {
    double factor = pow(10.0, n);
    return round(R * factor) / factor;
}

void mostrarResultado(double resultado, int n) {
    cout << "El numero redondeado es: ";
    cout << fixed << setprecision(n) << resultado << endl;
}
