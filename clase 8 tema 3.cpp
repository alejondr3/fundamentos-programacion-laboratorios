#include <iostream>

using namespace std;

int main() {

    char claveCorrecta[] = "1";
    char claveUsuario[20];

    int intentos = 0;
    int accesoConcedido = 0;

    cout << "===LOGIN===" << endl;

    do {
        cout << "\nIntento [" << intentos + 1 << "/3]" << endl;
        cout << "Contrasena: ";
        cin >> claveUsuario;

        intentos++;


        int coinciden = 1;
        int i = 0;


        while (claveCorrecta[i] != '\0' || claveUsuario[i] != '\0') {
            if (claveCorrecta[i] != claveUsuario[i]) {
                coinciden = 0;
                break;
            }
            i++;
        }

        if (coinciden == 1) {
            accesoConcedido = 1;
        } else {
            if (intentos < 3) {
                cout << "Error: Intentelo de nuevo." << endl;
            }
        }


    } while (accesoConcedido == 0 && intentos < 3);


    cout << "\n----------------------------" << endl;
    if (accesoConcedido == 1) {
        cout << "BIENVENIDO. Acceso otorgado." << endl;
    } else {
        cout << "BLOQUEADO. Demasiados fallos." << endl;
    }

    return 0;
}
