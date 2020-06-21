#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int int_n1;
int int_n2;
float float_resultado1;
float float_resultado2;

printf ("ingrese el primer numero:\n");
scanf("%d", &int_n1);
printf ("ingrese el segundo numero:\n");
scanf("%d", &int_n2);

float_resultado1 = 2 * int_n1 + pow(int_n2,2);
float_resultado2 = (pow(int_n1,3) + pow(int_n2,3))/2;

printf("el doble del primero + el cuadrado de segundo:%.2f \n",float_resultado1);
printf("el promedio de los cubos:%.2f \n",float_resultado2);

    return 0;
}
