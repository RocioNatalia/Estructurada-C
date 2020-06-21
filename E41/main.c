#include <stdio.h>
#include <stdlib.h>

int main()
{
float float_centimetros;
printf ("Ingrese centimetros: \n");
scanf ("%f", &float_centimetros);
printf ("esa cantidad de centimetros a pulgadas es: %.2f \n", float_centimetros / 2.54);
    return 0;
}
