#include<iostream>
using namespace std;

float calcularSubtotal(int cantidad);
float aplicarDescuento(float subtotal);
void mostrarResultado(float total);

int main()
{
    float subtotal, total;
    int cantidad;

    cout << "Cantidad de productos: ";
    cin >> cantidad;

    subtotal = calcularSubtotal(cantidad);

    total = aplicarDescuento(subtotal);

    mostrarResultado(total);

    return 0;
}

float calcularSubtotal(int cantidad)
{
    float subtotal;

    subtotal = cantidad * 25;

    return subtotal;
}

float aplicarDescuento(float subtotal)
{
    if(subtotal > 100)
    {
        subtotal = subtotal - (subtotal * 0.10);
    }

    return subtotal;
}

void mostrarResultado(float total)
{
    cout << "El total final es: " << total;
}
