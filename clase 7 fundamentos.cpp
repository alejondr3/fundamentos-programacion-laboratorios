#include <iostream>
using namespace std;

int main() {
    int n;
    float fib1 = 0, fib2 = 1;
    float impar = 1;
    float suma = 0;
    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    cout << "S = ";

    for (int i = 0; i < n; i++) {
        cout << fib1 << "/" << impar;

        if (i < n - 1)
            cout << " + ";

 suma = (fib1 / impar);
        int siguiente = fib1 + fib2;

        fib1 = fib2;
        fib2 = siguiente;
        suma += (fib1 / impar);

        impar += 2;
    }

    cout << "\nla suma de la serie seria:"  << suma;

    cout << endl;
    return 0;
}
