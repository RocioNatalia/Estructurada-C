#include <stdio.h>
#include <stdlib.h>

/*11. Desarrollar un programa que permita ingresar una cantidad que represente la temperatura en grados centígrados (Celsius)
 y muestre por pantalla cuál sería su equivalente en grados Kelvin.
(Pista: investigar la relación entre las dos escalas de temperatura) */

int main()
{
    float float_celsius;

    printf("Ingrese temperatura en celsius: \n");
    scanf("%f" , &float_celsius);

    printf("%.2f celsius es igual a %.2f Kelvin" , float_celsius , float_celsius + 273.15);

    return 0;
}
