#include <stdio.h>
#include <stdlib.h>

/*3. Desarrollar un programa que permita ingresar su nombre
y visualizar por pantalla un saludo que exprese “Buen día” más el nombre ingresado.*/

int main()
{
    char char_nombre[0];

    printf("Ingrese un Nombre: \n");
    scanf("%s" , &char_nombre);

    printf("Buen Dia %s" , char_nombre);
    return 0;
}
