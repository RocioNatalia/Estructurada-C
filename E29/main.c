#include <stdio.h>
#include <stdlib.h>

int main()
{
int int_años;
int int_meses;
printf("ingrese años: \n");
scanf("%d", &int_años);
printf("ingrese meses: \n");
scanf("%d", &int_meses);

printf("edad en meses: %d", int_años * 12 + int_meses);
    return 0;
}
