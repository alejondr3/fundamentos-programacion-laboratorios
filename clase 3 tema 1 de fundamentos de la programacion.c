
#include <stdio.h>

int main() {
    char Nombre_del_trabajador[50];
    float Pago_por_hora;
    float Horas_trabajadas;
    float Pago_de_la_mensualidad;
    float dias;
    float trabajado;

    printf("ingrese el nombre del trabajador: ");
    scanf("%s", Nombre_del_trabajador);

    printf("Ingrese los dias Trabajados: ");
    scanf("%f", &dias);

    printf("ingrese las horas trabajadas: ");
    scanf("%f", &Horas_trabajadas);

    printf("ingrese el pago de las horas: ");
    scanf("%f", &Pago_por_hora);

    Pago_de_la_mensualidad = Horas_trabajadas * Pago_por_hora;
    trabajado = dias * Pago_de_la_mensualidad;


    printf("nombre del trabajador:%s ", Nombre_del_trabajador);
    printf("     ");
    printf("pago por dia: %2.f ", Pago_de_la_mensualidad);
    printf("     ");
    printf("Pago del mes:%2.f ", trabajado);


    return 0;
}
