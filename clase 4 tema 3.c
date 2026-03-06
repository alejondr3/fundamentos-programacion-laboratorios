#include <stdio.h>

int main(){
float Base, Altura, total;

printf("Escriba la base: ");
scanf("%f", &Base);

printf("Escriba la Altura: ");
scanf("%f", &Altura);

total = (Base * Altura) / 2;
printf("-----------------------------");
printf("\n El area de su Triangulo Es: %.2f\n", total);
printf("-----------------------------");

return 0;



}
