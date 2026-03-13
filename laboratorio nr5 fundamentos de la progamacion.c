#include <stdio.h>
#include <math.h>

int main() {
 float radio, altura, area, volumen, Numero_pi, suma;
 printf("Ingrese el radio de su cilindro: ");
 scanf("%f", &radio);

 printf("Ingrese la Altura de su cilindro: ");
 scanf("%f", &altura);

 if (radio < 0 || altura < 0) {
        printf("\nError: El radio y la altura no pueden ser negativos.\n");
        return 1;
    }


 Numero_pi = 3.14159265;

 area = 2 * Numero_pi * radio * altura;
 volumen = Numero_pi * pow(radio, 2) * altura;
 suma = area + volumen;



 printf("\n Resultados calculados: \n");
 printf("\n---------------------------------\n");
 printf("\n Radio ingresado: %0.2f", radio);
 printf("\n Altura ingresada: %0.2f", altura);
 printf("\n---------------------------------\n");

 printf("\n El area lateral de su cilindro es: %0.2f unidades cuadradas\n", area);
 printf("\n El volumen de su cilindro es: %0.2f unidades cunicas\n", volumen);
 printf("\n---------------------------------\n");
 printf("\nLa suma de los valores obtenidos es: %0.2f\n ", suma);

 return 0;

}



