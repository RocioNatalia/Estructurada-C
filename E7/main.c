#include <stdio.h>
#include <stdlib.h>

/*7. Desarrollar un programa que permita ingresar dos números y muestre en pantalla la multiplicación de ambos. */

int main()
{
    int int_numero1 , int_numero2 ;

    printf("Ingrese numero 1: \n");
    scanf("%d" , &int_numero1);
    printf("Ingrese numero 1: \n");
    scanf("%d", &int_numero2);
    printf("%d * %d = %d" , int_numero1, int_numero2 ,int_numero1*int_numero2);

    return 0;
}
