#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int opcion;




    cout << "\nSeleccione operacion:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Opcion: ";
    cin >> opcion;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;


    switch(opcion) {
        case 1:
            cout << "Resultado: " << num1 + num2;
            break;
        case 2:
            cout << "Resultado: " << num1 - num2;
            break;
        case 3:
            cout << "Resultado: " << num1 * num2;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2;
            } else {
                cout << "Error: No se puede dividir entre cero.";
            }
            break;
        default:
            cout << "Opcion invalida.";
    }

    return 0;
}
