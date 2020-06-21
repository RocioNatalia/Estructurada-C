#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*17. Calcular el cambio en dólares y euros al ingresar cierta cantidad en pesos.
La cotización del dólar, la del euro y
la cantidad en pesos a cambiar las ingresa el usuario.*/

int main()
{
    float float_pesos;
    char char_moneda[0];

    printf("Ingrese cantidad de pesos:\n");
    scanf("%f" , &float_pesos);
    printf("Ingrese el tipo de moneda: ¿dolar o euro?");
    scanf(" %c" , &char_moneda);

    if(strncmp(char_moneda, "dolar", 10) == -1){

        printf("%.2f pesos son %.2f dolares" , float_pesos, float_pesos* 68);

    }else if (strncmp(char_moneda, "euro",10) == -1){

        printf("%.2 pesos son %.2f euros" , float_pesos, float_pesos * 73);

    }else{
        printf("No se puede cotizar la moneda", char_moneda);
    }

    return 0;
}
