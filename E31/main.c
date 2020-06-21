#include <stdio.h>
#include <stdlib.h>

int main()
{
float float_sueldoBase;
int int_ventasMes;

printf("ingrese sueldobase \n");
scanf("%f", &float_sueldoBase);
printf("ingrese ventasMes \n");
scanf("%d", &int_ventasMes);

printf("el sueldo final es: %.2f \n",float_sueldoBase + (float_sueldoBase * 0.10 * int_ventasMes));
printf ("el sueldo por las comosiones es: %.2f \n",float_sueldoBase * 0.10 * int_ventasMes);

    return 0;
}
