#include <stdio.h>

int main(){
float practica1, practica2, practica3;
float examen_teorico, examen_fianl, notapractioca, notaexamenpractico, notaexamenfinal, ponderada;

printf("Ingrese la nota de la primera practica: ");
scanf("%f", &practica1);
printf("Ingrese la nota de la segunda practica: ");
scanf("%f", &practica2);
printf("Ingrese la nota de la tercera practica: ");
scanf("%f", &practica3);

printf("Ingrese la nota del examen teorico: ");
scanf("%f", &examen_teorico);
printf("ingrese la nota del examen final: ");
scanf("%f", &examen_fianl);

notapractioca = ((practica1 + practica2 + practica3) / 3) * 0.45;
notaexamenpractico = examen_teorico * 0.35;
notaexamenfinal= examen_fianl * 0.2;

ponderada = notapractioca + notaexamenpractico + notaexamenfinal;

if(ponderada < 51) {
        printf ("\n usted no aprobo el curso\n");
        return 1;
}

printf("\nusted aprobo con: %2.f\n", ponderada);

return 0;







}
