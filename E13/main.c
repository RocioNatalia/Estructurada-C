#include <stdio.h>
#include <stdlib.h>

/*13. Desarrollar un programa que permita ingresar una cantidad que represente la temperatura en grados centígrados (Celsius)
y muestre por pantalla cuál sería su equivalente en grados Rankine.
(Pista: investigar la relación entre las dos escalas de temperatura)*/

int main()
{

    float float_celsius;

    printf("Ingrese temperatura en celsius: \n");
    scanf("%f" , &float_celsius);

    printf("%.2f celsius es igual a %.2f Rankine" , float_celsius , (float_celsius*9)/5 + 491.67);

    return 0;
}
