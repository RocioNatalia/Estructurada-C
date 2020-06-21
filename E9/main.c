
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*9. Desarrollar un programa que permita ingresar un número
y muestre en pantalla el resultado de calcular la raíz cuadrada de número ingresado.*/

int main()
{
    int int_numero;
    float numero_raiz;

    printf("Ingrese un numero\n");
    scanf("%d" , &int_numero);
    numero_raiz = sqrt(int_numero);

    printf("La raiz cuadrada de %d es %.2f" , int_numero , numero_raiz);

    return 0;
}
