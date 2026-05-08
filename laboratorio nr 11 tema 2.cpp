#include <iostream>
#include <string>

using namespace std;

void leerFecha(int &dia, int &mes, int &anio);
void LITERAL(int dia, int mes, int anio, string &mesLiteral, int &anioCompleto);
void mostrarFecha(int dia, string mesLiteral, int anioCompleto);

int main() {
    int d, m, a, aCompleto;
    string mLiteral;

    leerFecha(d, m, a);
    LITERAL(d, m, a, mLiteral, aCompleto);
    mostrarFecha(d, mLiteral, aCompleto);

    return 0;
}

void leerFecha(int &dia, int &mes, int &anio) {
    cout << "Ingrese el dia (1-31): ";
    cin >> dia;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> anio;
}

void LITERAL(int dia, int mes, int anio, string &mesLiteral, int &anioCompleto) {
    switch(mes) {
        case 1:  mesLiteral = "Enero"; break;
        case 2:  mesLiteral = "Febrero"; break;
        case 3:  mesLiteral = "Marzo"; break;
        case 4:  mesLiteral = "Abril"; break;
        case 5:  mesLiteral = "Mayo"; break;
        case 6:  mesLiteral = "Junio"; break;
        case 7:  mesLiteral = "Julio"; break;
        case 8:  mesLiteral = "Agosto"; break;
        case 9:  mesLiteral = "Septiembre"; break;
        case 10: mesLiteral = "Octubre"; break;
        case 11: mesLiteral = "Noviembre"; break;
        case 12: mesLiteral = "Diciembre"; break;
        default: mesLiteral = "Mes invalido"; break;
    }

    if (anio >= 0 && anio <= 25) {
        anioCompleto = 2000 + anio;
    } else if (anio > 25 && anio <= 99) {
        anioCompleto = 1900 + anio;
    } else {
        anioCompleto = anio;
    }
}

void mostrarFecha(int dia, string mesLiteral, int anioCompleto) {
    cout << "\nFecha en formato literal:" << endl;
    cout << dia << " de " << mesLiteral << " de " << anioCompleto << endl;
}
