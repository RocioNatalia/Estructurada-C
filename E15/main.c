#include <stdio.h>
#include <stdlib.h>

/*15. Calcula el precio de un boleto de viaje,
tomando en cuenta el número de kilómetros que se van a recorrer,
siendo el precio de pesos 10,50 por Km.
El usuario ingresa cuántos kilómetros va a recorrer.*/

int main()
{
    float float_km;

    printf("Ingrese cantos km planea recorrer: \n");
    scanf( "%f" , &float_km);
    printf("El precio del boleto es %.2f" , float_km * 10.5);

    return 0;
}
