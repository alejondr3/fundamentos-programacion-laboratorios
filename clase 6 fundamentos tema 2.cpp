#include <iostream>

using namespace std;

int main(){
float celcius, kelvin, rankine, fahrenheit;
int opcion;

cout <<"Ingrese el tipo de Conversion que quiere\n";
cout << "1.Fahrenhet\n";
cout << "2.kelvin\n";
cout << "3.Rankine\n";
cout << "Opcion: ";
cin >> opcion;
cout << "Ingrese los grados celcius: ";
cin >> celcius;

switch(opcion){
case 1:
 cout << "Relsultado en Farenheit: " << (celcius *(9/5)) + 32;
 break;
case 2:
    cout << "Resultado en Kelvin: " << celcius + 273.15;
    break;
case 3:
    cout << "Resultado en Rankine: " << (celcius *(9/5)) + 491.67;
    break;





}






}












