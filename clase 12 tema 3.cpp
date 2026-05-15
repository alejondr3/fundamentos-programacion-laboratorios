#include <iostream>
#include <string>

using namespace std;

void mostrarMenu() {
    cout << "===== PLANES DEL GIMNASIO =====" << endl;
    cout << "1. Basico      -> 100 Bs" << endl;
    cout << "2. Intermedio  -> 180 Bs" << endl;
    cout << "3. Premium     -> 250 Bs" << endl;
}

float obtenerPrecio(int plan) {
    if (plan == 1) {
        return 100;
    } else if (plan == 2) {
        return 180;
    } else if (plan == 3) {
        return 250;
    } else {
        return 0;
    }
}

float calcularSubtotal(float precio, int meses) {
    return precio * meses;
}

float calcularDescuento(float subtotal, int meses) {
    if (meses > 3) {
        return subtotal * 0.15;
    } else {
        return 0;
    }
}

void mostrarResultado(string nombre, float subtotal, float descuento, float total) {
    cout << "\n===== FACTURA FINAL =====" << endl;
    cout << "Cliente: " << nombre << endl;
    cout << "Subtotal: " << subtotal << " Bs" << endl;
    cout << "Descuento: " << descuento << " Bs" << endl;
    cout << "Total a pagar: " << total << " Bs" << endl;
}

int main() {
    string nombre;
    int plan, meses;

    mostrarMenu();

    cout << "\nIngrese nombre del cliente: ";
    getline(cin, nombre);

    cout << "Seleccione el tipo de plan (1-3): ";
    cin >> plan;

    cout << "Ingrese cantidad de meses: ";
    cin >> meses;

    float precio = obtenerPrecio(plan);
    float subtotal = calcularSubtotal(precio, meses);
    float descuento = calcularDescuento(subtotal, meses);
    float total = subtotal - descuento;

    mostrarResultado(nombre, subtotal, descuento, total);

    return 0;
}
