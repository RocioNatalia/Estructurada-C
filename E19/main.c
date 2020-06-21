#include <stdio.h>
#include <stdlib.h>

/*
19. Calcular el nuevo salario de un empleado
si obtuvo un incremento del 8% sobre su salario actual y
un descuento de 2,5% por servicios.
El usuario ingresa el salario del empleado.
*/

int main()
{
    float float_sueldo;
    float float_sueldonuevo;

    printf("Ingrese sueldo actual: \n");
    scanf( "%f" , &float_sueldo);

    float_sueldonuevo = float_sueldo * 1.08;

    printf("El nuevo sueldo es %.2f" , float_sueldonuevo * 0.975);

    return 0;
}
