#include <stdio.h>
#include <stdlib.h>

int main()
{
float float_nota1;
float float_nota2;
float float_nota3;

printf ("Ingrese nota del primer parcial \n");
scanf ("%f",&float_nota1);
printf ("ingrese nota del segundo parcias \n");
scanf ("%f",&float_nota2);
printf("ingrese nota del tercer parcial \n");
scanf ("%f",&float_nota3);
printf ("promedio total es: %.2f", (float_nota1 + float_nota2 + float_nota3)/3);
    return 0;
}
