#include <stdio.h>
#include <stdlib.h>

int main()
{

int int_urgencias=37;
int int_pediatria=42;
int int_traumatologia=21;
float float_presupuesto;

printf("ingrese presupuesto anual: \n");
scanf("%f",&float_presupuesto);
printf("\n presupuesto para urgencias: %.2f",(float_presupuesto * int_urgencias)/100);
printf("\n presupuesto para pediatria: %.2f",(float_presupuesto * int_pediatria)/100);
printf("\n presupuesto para traumatologia: %.2f",(float_presupuesto * int_traumatologia)/100);
    return 0;
}
