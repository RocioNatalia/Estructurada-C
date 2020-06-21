#include <stdio.h>
#include <stdlib.h>

int main()
{
float float_pesoKilo;
printf ("ingrese peso en kilogramos: \n");
scanf ("%f", &float_pesoKilo);
printf ("peso en libras es: %.2f \n",float_pesoKilo * 2.205);
printf ("peso en toneladas es: %.2f \n", float_pesoKilo / 1000);
printf ("peso en gramos es : %.2f \n", float_pesoKilo * 1000);


    return 0;
}
