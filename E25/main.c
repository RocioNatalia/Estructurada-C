#include <stdio.h>
#include <stdlib.h>

int main()
{
int int_horas;
int int_minutos;
int int_segundos;
float float_total;

printf ("ingrese cantidad de horas: \n");
scanf ("%d",&int_horas);
printf ("ingrese cantidad de minutos: \n");
scanf ("%d",&int_minutos);
printf("ingrese cantidad de segundos: \n");
scanf("%d",&int_segundos);

float_total=int_horas * 3600 + int_minutos * 60 + int_segundos;

printf("\n costo total del proceso: %.2f ",float_total * 0.25);

return 0;

}
