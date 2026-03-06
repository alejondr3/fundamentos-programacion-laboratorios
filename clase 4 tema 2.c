#include <stdio.h>

int main(){
char Nombre[50];
float Precio, Cantidad, Total;

printf("Nombre del Clientre: ");
scanf("%s", Nombre);

printf("Cantidad De productos: ");
scanf("%f", &Cantidad);

printf("Precio del producto: ");
scanf("%f", &Precio);



Total = Cantidad * Precio;
printf("----------------------");
printf("\n Nombre Del Clientre: %s\n", Nombre);
printf("----------------------");
printf("\n Total a Pagar: %.0f\n", Total);
printf("----------------------");

return 0;
    }
