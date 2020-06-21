#include <stdio.h>
#include <stdlib.h>

int main()
{
    float float_horas;
    float float_sueldo;
    printf("ingrese cantidad de horas trabajadas: \n");
scanf("%f",&float_horas);
printf("ingrese suelo por Hora: \n");
scanf("%f",&float_sueldo);
printf("sueldo total: %.2f",float_horas*float_sueldo);
    return 0;
}
